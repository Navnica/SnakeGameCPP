#pragma once

#include "Snake/GameObject.hpp"
#include "iostream"

namespace Ui{
    class Button : public virtual snake::GameObject{
    public:
        void logic();

    private:
        void setup();

    };
}