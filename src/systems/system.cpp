#include <iostream>

#include "system.hpp"

void System::update(float delta)
{
    // Update every tick if the delta is 0
    if (update_delta == 0.0f)
    {
        this->internal_update(delta);
        return;
    }

    // Otherwise keep track of the time and update accordingly
    delta_accum += delta;
    if (delta_accum > update_delta)
    {
        delta_accum -= update_delta;
        this->internal_update(update_delta);
    }
}

void System::internal_update(float delta)
{
    std::cout << "System::internal_update() - Override me!\n";
}