#include "behavior.hpp"

class WanderingBehavior : public Behavior
{
public:
    WanderingBehavior();
    ~WanderingBehavior() = default;
    virtual int get_score() override;
};