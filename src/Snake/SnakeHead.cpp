#include "Snake/SnakeHead.hpp"

using namespace snake;

SnakeHead::SnakeHead(Scene *scene) : GameObject(scene) {
    setObjectTexture("../images/snake_head.png");
    setObjectName("SnakeHead");
    setSize(sf::Vector2f(16, 16));
}

void SnakeHead::addBody() {
    
}

SnakeBody::SnakeBody(Scene *scene, SnakeHead *head) : GameObject(scene) {
    snakeHead = head;
}
