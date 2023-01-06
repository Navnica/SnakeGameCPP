#pragma once

#include "SFML/Graphics.hpp"

namespace snake{
    class GameObject : public sf::RectangleShape{
    public:
        std::string name;

        void logic();

    private:
        void setup();
    };
}