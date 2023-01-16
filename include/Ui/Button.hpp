#pragma once

#include "Snake/GameObject.hpp"
#include "Snake/Scene.hpp"
#include "iostream"

namespace Ui{
    class Button : public virtual snake::GameObject{
    public:
        explicit Button(snake::Scene *scene);
        bool isPressed();
        bool isPressedUp();
        bool isPressedDown();
        void logic();

    private:
        void setup();
        int pre = 0;
    };
}