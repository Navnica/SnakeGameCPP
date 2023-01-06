#include "Snake/GameObject.hpp"

using namespace snake;

void GameObject::setup(){

}

void GameObject::logic() {

}

void GameObject::setTextureObject(std::string texturePath) {
    textureObject = new sf::Texture();
    textureObject->loadFromFile(texturePath);

    setTexture(textureObject);
    setSize(sf::Vector2f(128, 128));
}