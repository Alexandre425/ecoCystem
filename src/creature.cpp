#include "creature.hpp"

#include "world.hpp"
#include "components.hpp"

extern World world;

void Creature::create()
{
    auto &reg = world.registry;
    auto &rng = world.rng;

    const auto entity = reg.create();
    reg.emplace<Position>(entity, Vec2(world.size * rng.random_between(-1., 1.), world.size * rng.random_between(-1., 1.)));
    reg.emplace<Velocity>(entity, Vec2(rng.random_between(-1., 1.), rng.random_between(-1., 1.)));
    auto c1 = Color(rng.random_normalized(), rng.random_normalized(), rng.random_normalized());
    auto c2 = Color(rng.random_normalized(), rng.random_normalized(), rng.random_normalized());
    reg.emplace<CreatureColor>(entity, c1, c2);
    reg.emplace<Size>(entity, static_cast<float>(rng.random_between(0.4, 2.)));
}