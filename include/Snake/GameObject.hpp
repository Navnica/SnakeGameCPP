#pragma once

#include "Snake/GameObjectAbstact.hpp"
#include "Snake/Scene.hpp"

namespace snake{
    class GameObject : public snake::GameObjectAbstract{
    public:
        GameObject();

        std::string name;
        virtual void logic();

        void setObjectTexture(std::string texturePath);
        void setFatherScene(snake::Scene *scene);

    private:
        sf::Texture *textureObject;
        snake::Scene *fatherScene;

        void setup();
    };
}