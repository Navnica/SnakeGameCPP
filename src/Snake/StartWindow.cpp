#include "Snake/StartWindow.hpp"

using namespace snake;

StartWindow::StartWindow() {
    settingWindow();
    startGameLoop();
}

StartWindow::~StartWindow() {
    std::cout << "d";
}

void StartWindow::settingWindow(){
    window = new sf::RenderWindow(sf::VideoMode(800, 600), "Main menu", sf::Style::Close);
    window->setFramerateLimit(60);

    scenes.reserve(0);

    Scene* newScene = new Scene(window);
    scenes.push_back(*newScene);

    Ui::Button* nb = new Ui::Button(newScene);
    nb->setObjectName("Button");
    nb->setObjectTexture("../images/button.png");
    sf::Vector2<float> correctPos = sf::Vector2<float>(
            (window->getSize().x / 2) - (nb->getSize().x / 2),
            (window->getSize().y / 2) - (nb->getSize().y / 2)
            );

    nb->setPosition(correctPos);

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
                drawScenes();
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

    Ui::Button* b = dynamic_cast<Ui::Button *>(scenes[0].findObjectByName("Button"));

    if(b->isPressedUp())
        window->close();
}

