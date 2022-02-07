#include "creature.hpp"

#include "world.hpp"
#include "components.hpp"

extern World world;

void Creature::create()
{
    auto &reg = world.registry;

    const auto entity = reg.create();
    reg.emplace<Position>(entity);
}