#include "Snake/SnakeHead.hpp"

using namespace snake;

SnakeHead::SnakeHead(Scene *scene) : GameObject(scene) {
    setObjectTexture("../images/snake_head.png");
    setObjectName("SnakeHead");
    setSize(sf::Vector2f(16, 16));

    sf::Vector2<float> startPos(
            (fatherScene->window->getSize().x / 2) - (getSize().x / 2),
            (fatherScene->window->getSize().y / 2) - (getSize().y / 2)
            );

    setPosition(startPos);

}

void SnakeHead::addBody() {
    
}

SnakeBody::SnakeBody(Scene *scene, SnakeHead *head) : GameObject(scene) {
    snakeHead = head;
}
