#pragma once

#include <chrono>
#include <mutex>
#include <entt/entt.hpp>

#include "graphics.hpp"
#include "rng.hpp"
#include "user_interface.hpp"
#include "systems/system.hpp"
#include "systems/all_systems.hpp"

class World
{
    public:

        Graphics graphics;
        std::unique_ptr<GUI> interface;
        // Random number generator
        NoiseRNG rng;

        static constexpr double MIN_SIZE = 20;
        static constexpr double MAX_SIZE = 10000;
        // World size in meters (always square)
        // Keep in mind the actual size is twice this, as the coord space is (-size, size)
        double size;
        // Returns a random position in the world
        Vec2 random_position();

        // Number of species to spawn at the start
        uint32_t species_count = 20;
        // Number of creatures per species to spawn at the start
        uint32_t creatures_per_species = 20;

        // Wether creature migrations are enabled
        bool migrations_enabled = false;
        // Number of seconds between migrations
        float migration_time = 60.;
        // Number of creatures per migration
        uint32_t migration_count = 5;

        using timepoint = std::chrono::time_point<std::chrono::steady_clock>;
        // Start time of the simulation
        timepoint epoch;
        // Time of the last tick
        timepoint last_tick;
        // Last sim delta
        float last_delta;

        // Target simulation tick interval
        float sim_interval = 1 / 60.;
        // Simulation delta time
        float sim_delta = 1 / 60.;

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
        static void sim_loop();
    private:

};

extern World world;