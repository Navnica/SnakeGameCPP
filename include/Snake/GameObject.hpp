#pragma once

#include "SFML/Graphics.hpp"

namespace snake{
    class GameObject : public sf::RectangleShape{
    public:
        GameObject();

        std::string name;

        virtual void logic();
        void setObjectTexture(std::string texturePath);

    private:
        sf::Texture *textureObject;
        void setup();
    };
}