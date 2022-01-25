#pragma once

#include "graphics.hpp"

// Contains all the relevant objects and systems of the simulation
class World
{
    public:
        Graphics graphics;

        // Initializes all the systems
        World();
        // Frees all the system resources
        ~World();
        
        void mainLoop();
    private:

};