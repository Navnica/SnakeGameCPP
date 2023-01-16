#pragma once

#include "SFML/Graphics.hpp"
#include "Snake/GameObjectAbstract.hpp"


namespace snake{
    class SceneAbstract{
    public:
        explicit SceneAbstract(sf::RenderWindow *window);

        virtual void exScene();
        virtual void addObject(GameObjectAbstract *newObject);
        sf::RenderWindow *window{};

        //   GameObject *findObjectByName(std::string name);
    private:
        std::vector <GameObjectAbstract*> gameObjects;

        virtual void drawScene();
        virtual void logicObjects();

    };

}