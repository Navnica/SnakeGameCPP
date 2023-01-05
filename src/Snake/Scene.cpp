#include "Snake/Scene.hpp"

using namespace snake;

Scene::Scene(sf::RenderWindow *win) {
    gameObjects.reserve(0);
    window = win;
}

void Scene::addObject(GameObject newObject) {
    gameObjects.push_back(newObject);
}

void Scene::exScene() {
    drawScene();
    logicObjects();
}

void Scene::drawScene() {
    for (int i = 0; i != gameObjects.size(); i++)
        window->draw(gameObjects[i]);
}

void Scene::logicObjects(){
    for (int i = 0; i != gameObjects.size(); i++)
        gameObjects[i].logic();
}

GameObject Scene::findObjectByName(std::string name) {
    for (int i = 0; i != gameObjects.size(); i++)
        if(gameObjects[i].name == name)
            return gameObjects[i];

}