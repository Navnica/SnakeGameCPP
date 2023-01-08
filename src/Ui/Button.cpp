#include "Ui/Button.hpp"

using namespace Ui;

Button::Button() {
    setup();
}

void Button::setup() {

}

void Button::logic() {
    std::cout << "fuck";
    if(sf::Mouse::isButtonPressed(sf::Mouse::Left)){
    }
}