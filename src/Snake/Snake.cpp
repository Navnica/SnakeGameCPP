#include "Snake/Snake.hpp"

using namespace snake;

Snake::Snake(Scene *scene) : snake::GameObject(scene){
    
}

void Snake::setup(){
    setObjectTexture("../images/snake_head.png");
    setObjectName("Snake");
}
