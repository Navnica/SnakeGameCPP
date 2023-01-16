#pragma once

#include "SFML/Graphics.hpp"
#include "Ui/Button.hpp"
#include "Snake/Scene.hpp"
#include "Snake/Snake.hpp"
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
