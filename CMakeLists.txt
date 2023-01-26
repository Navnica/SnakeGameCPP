cmake_minimum_required(VERSION 3.2)
project(snake)

set(SFML_DIR ./lib/SFML)
set(CMAKE_CXX_STANDARD 17)

find_package(SFML 2.5.1 COMPONENTS graphics REQUIRED)

add_executable(snake
        src/Snake/main.cpp
        src/Snake/Scene.cpp
        src/Snake/StartWindow.cpp
        src/Snake/GameObject.cpp
        src/Ui/Button.cpp
        src/Snake/GameObjectAbstract.cpp
        src/Snake/SceneAbstract.cpp
        src/Snake/SnakeHead.cpp)

include_directories(include)

target_link_libraries(snake sfml-graphics)
