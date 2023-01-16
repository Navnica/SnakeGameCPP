#pragma once

#include "SFML/Graphics.hpp"
#include "iostream"

namespace snake{
    class GameObjectAbstract : public sf::RectangleShape{
    public:
        std::string name;
        virtual void logic();
    };
}