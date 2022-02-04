#pragma once

#include <chrono>

#include "graphics.hpp"
#include "user_interface.hpp"

class World
{
    public:

        Graphics graphics;
        GUI interface;

        using timepoint = std::chrono::time_point<std::chrono::steady_clock>;
        // Start time of the simulation
        timepoint epoch;
        // Time of the last tick
        timepoint last_tick;
        // Target simulation delta time
        float target_delta_time = 1 / 60.0;

        // Initializes all the systems
        World();
        // Frees all the system resources
        ~World();

        void mainLoop();
    private:

};

extern World world;