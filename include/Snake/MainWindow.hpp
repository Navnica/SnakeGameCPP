#pragma once

#include "SFML/Graphics.hpp"
#include "Snake/Scene.hpp"
#include "Snake/SnakeHead.hpp"
#include "iostream"

namespace snake{

    class MainWindow{
    public:
        MainWindow();

    private:
        sf::RenderWindow *window;
        std::vector<Scene> scenes;

        void startGameLoop();
        void settingWindow();
        void drawScenes();
        void gameLogic();
    };

}
