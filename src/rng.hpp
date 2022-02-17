#pragma once

#include <inttypes.h>

namespace Noise
{
    // One-dimensional noise
    uint64_t get_noise(uint64_t x);
    // One-dimensional noise with a seed
    uint64_t get_noise(uint64_t seed, uint64_t x);
    // Two-dimensional noise with a seed
    uint64_t get_noise(uint64_t seed, uint64_t x, uint64_t y);
}

class NoiseRNG
{
private:
    uint64_t state;
public:
    // Initializes the random number generator with a state
    NoiseRNG(uint64_t state);
    ~NoiseRNG() = default;

    // Returns a random number
    uint64_t random();
    // Returns a random double between 0 and 1
    double random_normalized();
    // Returns a random double between the provided values
    double random_between(const double min, const double max);
};

