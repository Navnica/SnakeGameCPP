#pragma once

#include "SFML/Graphics.hpp"
#include "Snake/GameObject.hpp"

namespace snake{

    class Scene{
    public:
        explicit Scene(sf::RenderWindow *window);

        void exScene();
        void addObject(GameObject *newObject);
     //   GameObject *findObjectByName(std::string name);

    private:
        sf::RenderWindow *window;
        std::vector <GameObject*> gameObjects;

        void drawScene();
        void logicObjects();

    };

}