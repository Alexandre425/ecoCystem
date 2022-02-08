#pragma once

#include <entt/entt.hpp>

#include "../components.hpp"

class Behavior
{
public:
    Behavior(const void (*action)(entt::entity ent)) : action(action) {}
    ~Behavior() = default;

    // Returns the score for the behavior
    virtual int get_score()
    {
        return 0;
    }

    // The action function corresponding to the behavior
    const void (*action)(entt::entity ent);
};

