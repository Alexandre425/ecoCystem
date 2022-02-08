#include <entt/entt.hpp>

#include "all_behaviors.hpp"

const void wandering_action(entt::entity ent)
{

}

WanderingBehavior::WanderingBehavior()
    : Behavior(wandering_action) {}

int WanderingBehavior::get_score()
{
    // Wandering should be a last resort
    return 1;
}