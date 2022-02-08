#pragma once

#include <entt/entt.hpp>

#include "utilities.hpp"

// An entity's position
struct Position { Vec2 pos; };
// An entity's velocity vector
struct Velocity { Vec2 vel; };
// An entity's target waypoint
struct Waypoint { Vec2 pos; };
// An entity's target entity
struct Target { entt::entity ent; };
// An entity's size
struct Size { float size; };
// A creature's colors
struct CreatureColor { Color color1, color2; };
// Tag for female creatures
struct Female {};
// Tag for male creatures
struct Male {};
// A creature's action function
struct Action { void (*func)(entt::entity ent); };

