#include "all_systems.hpp"
#include "../world.hpp"
#include "../components.hpp"

extern World world;

void MovementSys::internal_update(float delta)
{
    auto &reg = world.registry;

    auto view = reg.view<Position, Velocity, Waypoint>();

    view.each([&delta](auto ent, Position &pos, Velocity &vel, Waypoint &waypoint)
    {
        auto direction = (waypoint.pos - pos.pos).get_normalized();
        vel.vel = direction;
        pos.pos = pos.pos + vel.vel * delta;

        if ((pos.pos - waypoint.pos).length2() < 1.)
        {
            waypoint.pos = world.random_position();
        }
    });
}