#pragma once

#include <entt/entt.hpp>

#include "vec2.hpp"

// An entity's position
struct Position { Vec2 pos; };
// An entity's velocity vector
struct Velocity { Vec2 vel; };
// An entity's target waypoint
struct Waypoint { Vec2 pos; };
// An entity's target entity
struct Target { entt::entity ent; };

// An entity's color
struct Color
{
    float r,g,b;

    Color() = default;
    Color(float r, float g, float b)
        : r(r), g(g), b(b) {}
};

