#pragma once

#include "Snake/GameObject.hpp"
#include "iostream"

namespace Ui{
    class Button : public snake::GameObject{
    public:
        Button();

        void logic();
    private:
        void setup();
    };
}