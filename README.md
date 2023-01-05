# Snake game CPP

[![_](https://img.shields.io/badge/oldvetsion-pygame-brightgreen)](https://github.com/Navnica/SnakeGame.git)

## About
A fork of a game developed using Python pygame\
Now C++ SFML is used

## Tech

| Lib | GitHub | Site |
| - | - | -|
| SFML-2.5.1 | https://github.com/SFML/SFML | https://www.sfml-dev.org/ |


## Run

First build/download [SFML] for your OS

In CMakeLists.txt where `SET(SFML_DIR ./lib/SFML)` replace `./lib/SFML` to your SFML path
```sh
git clone https://github.com/Navnica/SnakeGameCPP.git
cd SnakeGameCPP
mkdir build
cd build
```

### Linux

Install g++ and cmake first

```sh
sudo apt install -y g++ cmake
```
Let's build project

```sh
cmake -S .. -B ./build -G "Unix Makefiles"
make
./snake
```

### Windows

Download and install [MinGW] and [CMake]


| MinGW | CMake |
| - | - |
| https://sourceforge.net/projects/mingw/ | https://cmake.org/ |

After installation add MinGW and CMake in your PATH

```cmd
cmake -S .. -B ./build -G "MinGW Makefiles"
mingw32-make
./snake.exe
```

>Note: On windows most likely you will get errors by type
`The program can't start because sfml-graphics-2.dll is missing from your computer. Try reinstalling the program to fix this problem.`
> In this case, just move everything .dll files from <your-sfml-folder/bin> to the folder where it is located snake.exe


[SFML]: <https://www.sfml-dev.org/download.php>
[MinGW]: <https://sourceforge.net/projects/mingw/>
[CMake]: <https://cmake.org/>
