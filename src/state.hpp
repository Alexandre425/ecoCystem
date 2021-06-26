#pragma once

#include "graphics.hpp"

// Contains all the relevant objects and systems of the simulation
class State
{
    public:
        Graphics graphics;

        void mainLoop();
        // Initializes all the systems, run before entering the main loop
        void init();
        // Frees all the system resources
        void terminate();
    private:

};