#pragma once

#include "SFML/Graphics.hpp"

namespace snake{
    class GameObject : public sf::RectangleShape{
    public:
        std::string name;

        void logic();
        void setTextureObject(std::string texturePath);

    private:
        sf::Texture *textureObject;
        void setup();
    };
}