#pragma once

#include <chrono>
#include <entt/entt.hpp>
#include <mutex>

#include "graphics.hpp"
#include "user_interface.hpp"
#include "systems/system.hpp"
#include "systems/all_systems.hpp"

class World
{
    public:

        Graphics graphics;
        std::unique_ptr<GUI> interface;

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

        // Wether the simulation has started;
        bool started = false;

        // Registry storing all simulation entities
        entt::registry registry;
        // Registry mutex, locks when rendering or updating from the event queues
        std::mutex registry_mutex;

        // Simulation systems
        std::vector<System*> systems;

        // Initializes all the systems
        World();
        // Frees all the system resources
        ~World();

        // Starts the simulation
        void start_sim();

        // The render loop
        void render_loop();
        // Renders the start menu before the simulation begins
        void render_start_menu(float delta);
        // Renders the simulation
        void render_sim(float delta);


        // The simulation loop
        void sim_loop();
    private:

};

extern World world;