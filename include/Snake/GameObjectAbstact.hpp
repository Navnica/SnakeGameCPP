#pragma once

#include "SFML/Graphics.hpp"

namespace snake{
    class GameObjectAbstract : public sf::RectangleShape{
    public:
        virtual void logic();
        virtual void setFatherScene();
    };
}