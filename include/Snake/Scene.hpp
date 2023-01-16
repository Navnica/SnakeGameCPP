#pragma once

#include "SFML/Graphics.hpp"
#include "Snake/GameObjectAbstract.hpp"
#include "iostream"

namespace snake{

    class Scene{
    public:
        explicit Scene(sf::RenderWindow *window);

        void exScene();
        void addObject(GameObjectAbstract *newObject);
        sf::RenderWindow *window;

        GameObjectAbstract* findObjectByName(std::string name);
    private:
        std::vector <GameObjectAbstract*> *gameObjects;

        void drawScene();
        void logicObjects();

    };

}