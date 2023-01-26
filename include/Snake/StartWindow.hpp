#pragma once

#include "SFML/Graphics.hpp"
#include "Ui/Button.hpp"
#include "SnakeHead.hpp"
#include "Snake/Scene.hpp"
#include "iostream"

namespace snake{

    class StartWindow{
    public:
        StartWindow();
        ~StartWindow();

        void changeScene(int sceneId);

    private:
        sf::RenderWindow *window;
        std::vector<Scene*> scenes;
        Scene *openScene;

        void startGameLoop();
        void settingWindow();
        void drawOpenScene();
        void gameLogic();

    };

}