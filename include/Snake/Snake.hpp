#include "Snake/GameObject.hpp"
#include "Snake/Scene.hpp"

namespace snake{
    class Snake : public snake::GameObject{
        public:
            explicit Snake(Scene *scene);
    };
}

