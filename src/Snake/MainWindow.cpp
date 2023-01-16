#include "Snake/MainWindow.hpp"


using namespace snake;

MainWindow::MainWindow() {
    settingWindow();
    startGameLoop();
}

void MainWindow::settingWindow(){
    window = new sf::RenderWindow(sf::VideoMode(800, 600), "Snake game by Navnica", sf::Style::Close);
    window->setFramerateLimit(60);

    scenes.reserve(0);

    Scene* newScene = new Scene(window);
    scenes.push_back(*newScene);
    
    SnakeHead* sn = new SnakeHead(newScene);
    sn->setPosition(sf::Vector2<float>(
            (window->getSize().x / 2) - (sn->getSize().x / 2),
            (window->getSize().y / 2) - (sn->getSize().y / 2)

            ));

    newScene->addObject(sn);
    
}

void MainWindow::startGameLoop() {
    while (window->isOpen()){
        sf::Event _event;

        while (window->pollEvent(_event))
            if (_event.type == sf::Event::Closed)
                window->close();

        window->clear();
        gameLogic();
        drawScenes();
        window->display();

    }
}

void MainWindow::drawScenes() {
    int i = 0;

    do {
        scenes[i].exScene();
    } while (i != scenes.size()-1);
}

void MainWindow::gameLogic() {

}

