#pragma once

#include "SFML/Graphics.hpp"
#include "Snake/GameObjectAbstact.hpp"


namespace snake{

    class Scene{
    public:
        explicit Scene(sf::RenderWindow *window);

        void exScene();
        void addObject(GameObjectAbstract *newObject);
        sf::RenderWindow *window;

     //   GameObject *findObjectByName(std::string name);
    private:
        std::vector <GameObjectAbstract*> gameObjects;

        void drawScene();
        void logicObjects();

    };

}