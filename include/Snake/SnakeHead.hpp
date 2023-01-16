#pragma once

#include "Snake/GameObject.hpp"
#include "Snake/Scene.hpp"
#include "iostream"

namespace snake{
    class SnakeHead : public GameObject{
    public:
        explicit SnakeHead(Scene *scene);

        void addBody();

    };

    class SnakeBody : public GameObject{
    public:
        explicit SnakeBody(Scene *scene, SnakeHead *head);

    private:
        SnakeHead *snakeHead;
    };

}