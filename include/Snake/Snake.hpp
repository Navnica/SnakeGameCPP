#include "Snake/GameObject.hpp"
#include "Snake/Scene.hpp"

namespace snake{
    class Snake : public snake::GameObject{
    public:
        int lenght = 1;
    
        Snake(Scene *scene);
    
        void logic();
        
    private:
        void setup();
        
    };
}

