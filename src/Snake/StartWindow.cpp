#include "Snake/StartWindow.hpp"

using namespace snake;

StartWindow::StartWindow() {
    settingWindow();
    startGameLoop();
}

StartWindow::~StartWindow() {
    
}

void StartWindow::settingWindow(){
    window = new sf::RenderWindow(sf::VideoMode(800, 600), "Snake", sf::Style::Close);
    window->setFramerateLimit(60);

    scenes.reserve(0);

    Scene* newScene = new Scene(window);
    Scene* gameScene = new Scene(window);
    Scene* menuScene = new Scene(window);

    scenes.push_back(newScene);
    scenes.push_back(gameScene);
    scenes.push_back(menuScene);

    openScene = newScene;

    Ui::Button* nb = new Ui::Button(newScene);
    nb->setObjectName("Button");
    nb->setObjectTexture("../images/button.png");
    sf::Vector2<float> correctPos = sf::Vector2<float>(
            (window->getSize().x / 2) - (nb->getSize().x / 2),
            (window->getSize().y / 2) - (nb->getSize().y / 2)
            );

    nb->setPosition(correctPos);
    nb->setExecuteDef([this](){ changeScene(1);});


    SnakeHead* snakeHead = new SnakeHead(gameScene);

    Ui::Button* pauseButton = new Ui::Button(menuScene);
    pauseButton->setObjectName("PauseButton");
    pauseButton->setObjectTexture("../images/button.png");
    pauseButton->setSize(sf::Vector2f(64, 64));
    pauseButton->setPosition(sf::Vector2<float>(
            (window->getSize().x / 2) - (pauseButton->getSize().x / 2),
            (window->getSize().y / 2) - (pauseButton->getSize().y / 2)));

    pauseButton->setExecuteDef([this](){ changeScene(1);});


    newScene->addObject(nb);
    gameScene->addObject(snakeHead);
    menuScene->addObject(pauseButton);
}

void StartWindow::startGameLoop() {
    while (window->isOpen()){
        sf::Event _event;

        while (window->pollEvent(_event))
            if (_event.type == sf::Event::Closed)
                window->close();

                window->clear();
                gameLogic();
                drawOpenScene();
                window->display();

    }
}

void StartWindow::drawOpenScene(){
    openScene->exScene();
};

void StartWindow::changeScene(int sceneId) {
    openScene = scenes[sceneId];
}

void StartWindow::gameLogic() {
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Escape)){
        changeScene(2);
    }
}

