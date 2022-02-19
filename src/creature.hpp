#pragma once

#include <entt/entt.hpp>

#include "components.hpp"

struct Creature
{
    struct Traits
    {

    } traits;

    // Creates a random creature
    Creature();
    ~Creature() = default;

    // Inserts a creature into the registry
    void registry_insert();

    Position position;
    Velocity velocity;
    Waypoint waypoint;
    Size size;
    CreatureColor colors;
    bool is_male;

};
