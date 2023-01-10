#include "Ui/Button.hpp"

using namespace Ui;


void Button::setup() {

}


void Button::logic() {
    std::cout << sf::Mouse::getPosition().x << " ";
    std::cout << sf::Mouse::getPosition().y << "\n";
}