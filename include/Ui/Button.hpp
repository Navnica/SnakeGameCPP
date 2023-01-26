#pragma once

#include "Snake/GameObject.hpp"
#include "Snake/Scene.hpp"
#include "iostream"
#include "functional"

namespace Ui{
    class Button : public virtual snake::GameObject{
    public:
        explicit Button(snake::Scene *scene);
        bool isPressed();
        bool isPressedUp();
        bool isPressedDown();
        void logic();
        void setExecuteDef(std::function<void()> f);

    private:
        int pre = 0;
        std::function<void()> exDef = [](){};

        void setup();
    };
}