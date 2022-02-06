#pragma once

#include <entt/entt.hpp>

class System
{
public:

    /**
     * @brief Constructs a new System object
     *
     * @param delta The time between the system's internal updates.
     *  Set to 0 update every tick
     *
     */
    System(float delta) : update_delta(delta), delta_accum(0.0f) {}

    ~System() {}

    /**
     * @brief Updates the system once per tick, runs the internal update if enough time has past
     *
     * @param delta Simulation delta time
     */
    void update(float delta);

protected:
    virtual void internal_update(float delta);

private:
    const float update_delta;
    float delta_accum;
};