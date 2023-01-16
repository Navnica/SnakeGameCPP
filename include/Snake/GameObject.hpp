#pragma once

#include "Snake/GameObjectAbstract.hpp"
#include "Snake/Scene.hpp"

namespace snake{
    class GameObject : public snake::GameObjectAbstract{
    public:
        explicit GameObject(Scene *scene);

        virtual void logic();

        virtual void setObjectTexture(std::string texturePath);
        virtual void setObjectName(std::string newName);

    private:
        sf::Texture *textureObject;

    protected:
        Scene *fatherScene;
    };
}
