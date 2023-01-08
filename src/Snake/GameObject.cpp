#include "Snake/GameObject.hpp"
#include "iostream"

using namespace snake;

GameObject::GameObject(){
    GameObject::setup();
};

void GameObject::setup(){

}

void GameObject::logic(){

}

void GameObject::setObjectTexture(std::string texturePath) {
    textureObject = new sf::Texture();
    textureObject->loadFromFile(texturePath);

    setTexture(textureObject);
    setSize(sf::Vector2f(128, 128));
}
