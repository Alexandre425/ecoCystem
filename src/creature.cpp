#include "creature.hpp"

#include "world.hpp"
#include "components.hpp"

extern World world;

Creature::Creature()
{
    auto &rng = world.rng;

    position.pos = world.random_position();
    velocity.vel = Vec2(rng.random_between(-1., 1.), rng.random_between(-1., 1.)).get_normalized();
    waypoint.pos = world.random_position();
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
    reg.emplace<Waypoint>(entity, waypoint.pos);
    reg.emplace<CreatureColor>(entity, colors.color1, colors.color2);
    reg.emplace<Size>(entity, size.size);
    is_male ? reg.emplace<Male>(entity) : reg.emplace<Female>(entity);
}