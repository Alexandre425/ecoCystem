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
        // Last sim delta
        float last_delta;

        // Target simulation ticks per second
        int ticks_per_sec = 60;

        // Simulation delta time
        float sim_delta = 1 / 60.0;

        // Initializes all the systems
        World();
        // Frees all the system resources
        ~World();

        void main_loop();

        // Runs a simulation tick
        void update();
    private:

};

extern World world;