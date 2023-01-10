#include "Snake/StartWindow.hpp"

using namespace snake;

StartWindow::StartWindow() {
    settingWindow();
    startGameLoop();
}

void StartWindow::settingWindow(){
    window = new sf::RenderWindow(sf::VideoMode(800, 600), "Main menu");
    scenes.reserve(0);

    scenes.push_back(Scene(window));

    Ui::Button* nb = new Ui::Button();

    nb->setObjectTexture("../images/button.png");

    scenes[scenes.size()-1].addObject(nb);
}

void StartWindow::startGameLoop() {
    while (window->isOpen()){
        sf::Event _event;

        while (window->pollEvent(_event))
            if (_event.type == sf::Event::Closed)
                window->close();

                window->clear();
                gameLogic();
                window->display();

    }
}

void StartWindow::drawScenes() {
    int i = 0;

    do {
        scenes[i].exScene();
    } while (i != scenes.size()-1);
}

void StartWindow::gameLogic() {
    drawScenes();
}

