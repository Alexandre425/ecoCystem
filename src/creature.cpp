#include "creature.hpp"

#include "world.hpp"
#include "components.hpp"

extern World world;

Creature::Creature()
{
    auto &rng = world.rng;

    position.pos = Vec2(world.size * rng.random_between(-1., 1.), world.size * rng.random_between(-1., 1.));
    velocity.vel = Vec2(rng.random_between(-1., 1.), rng.random_between(-1., 1.));
    size.size = rng.random_between(0.4, 2.);
    colors.color1 = Color(rng.random_normalized(), rng.random_normalized(), rng.random_normalized());
    colors.color2 = Color(rng.random_normalized(), rng.random_normalized(), rng.random_normalized());
    is_male = rng.random_normalized() > 0.5;
}

void Creature::registry_insert()
{
    auto &reg = world.registry;
    auto &rng = world.rng;

    const auto entity = reg.create();
    reg.emplace<Position>(entity, position.pos);
    reg.emplace<Velocity>(entity, velocity.vel);
    reg.emplace<CreatureColor>(entity, colors.color1, colors.color2);
    reg.emplace<Size>(entity, size.size);
    is_male ? reg.emplace<Male>(entity) : reg.emplace<Female>(entity);
}