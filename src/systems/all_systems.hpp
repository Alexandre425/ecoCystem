#pragma once

#include "system.hpp"

class MovementSys : public System
{
public:
    MovementSys() : System(0.0f) {}
    ~MovementSys() {}
protected:
    virtual void internal_update(float delta) override;
};