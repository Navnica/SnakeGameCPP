#include "Snake/Scene.hpp"
#include "typeinfo"

using namespace snake;

Scene::Scene(sf::RenderWindow *win) {
    gameObjects = new std::vector<GameObjectAbstract*>;
    gameObjects->reserve(0);
    window = win;
}

void Scene::addObject(GameObjectAbstract *newObject) {

    gameObjects->push_back(newObject);
}

void Scene::exScene() {
    drawScene();
    logicObjects();
}

void Scene::drawScene() {
    for (int i = 0; i != gameObjects->size(); i++)
        window->draw(*gameObjects->at(i));
}

void Scene::logicObjects(){
    for (int i = 0; i != gameObjects->size(); i++)
        gameObjects->at(i)->logic();

}


GameObjectAbstract* Scene::findObjectByName(std::string tname) {
    for (int i = 0; i != gameObjects->size(); i++){
        if(gameObjects->at(i)->name == tname)
            return gameObjects->at(i);}

    return NULL;
}


