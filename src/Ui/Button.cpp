#include "Ui/Button.hpp"

using namespace Ui;

Button::Button(snake::Scene *scene) : snake::GameObject(scene) {

}

void Button::setup() {

}

bool Button::isPressed(){
    sf::Vector2i mousePos = sf::Mouse::getPosition(*fatherScene->window);

    bool condX = mousePos.x > getPosition().x & mousePos.x < (getPosition().x + getSize().x);
    bool condY = mousePos.y > getPosition().y & mousePos.y < (getPosition().y + getSize().y);

    if(sf::Mouse::isButtonPressed(sf::Mouse::Button::Left) & (condY & condX))
        return true;

    return false;
}

bool Button::isPressedUp() {
    return (pre == 1) & (isPressed() == 0);
}

bool Button::isPressedDown() {
    return (pre == 0) & (isPressed() == 1);
}

void Button::setExecuteDef(std::function<void()> f) {
    exDef = std::move(f);
}

void Button::logic() {
    if(isPressedUp()){
        exDef();
    }

    if(isPressed()){
        setFillColor(sf::Color(255, 255, 255, 210));
        pre = 1;
    }
    else{
        setFillColor(sf::Color::White);
        pre = 0;
    }

}

