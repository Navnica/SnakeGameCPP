#include "Snake/GameObject.hpp"
#include "iostream"

using namespace snake;

GameObject::GameObject(Scene *scene){
    fatherScene = scene;
};


void GameObject::logic(){

}

void GameObject::setObjectTexture(std::string texturePath) {
    textureObject = new sf::Texture();
    textureObject->loadFromFile(texturePath);

    setTexture(textureObject);
    setSize(sf::Vector2f(128, 128));
}

void GameObject::setObjectName(std::string newName) {
    name = newName;
}
