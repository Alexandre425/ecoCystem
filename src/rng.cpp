#include "rng.hpp"

uint64_t Noise::get_noise(uint64_t x)
{
    // Squirrel3 noise
    constexpr uint64_t BIT_NOISE1 = 0xB5297A4D;
    constexpr uint64_t BIT_NOISE2 = 0x68E31DA4;
    constexpr uint64_t BIT_NOISE3 = 0x1B56C4E9;

    x *= BIT_NOISE1;
    x ^= x >> 8;
    x += BIT_NOISE2;
    x ^= x << 8;
    x *= BIT_NOISE3;
    x ^= x >> 8;

    return x;
}

uint64_t Noise::get_noise(uint64_t seed, uint64_t x)
{
    constexpr uint64_t BIT_NOISE1 = 0xB5297A4D;
    constexpr uint64_t BIT_NOISE2 = 0x68E31DA4;
    constexpr uint64_t BIT_NOISE3 = 0x1B56C4E9;

    x *= BIT_NOISE1;
    x += seed;
    x ^= x >> 8;
    x += BIT_NOISE2;
    x ^= x << 8;
    x *= BIT_NOISE3;
    x ^= x >> 8;

    return x;
}

uint64_t Noise::get_noise(uint64_t seed, uint64_t x, uint64_t y)
{
    constexpr uint64_t BIG_PRIME = 328453342931935609;
    return Noise::get_noise(seed, x + (BIG_PRIME * y));
}


NoiseRNG::NoiseRNG(uint64_t state)
    : state(state)
{}

uint64_t NoiseRNG::random()
{
    return state = Noise::get_noise(state);
}

double NoiseRNG::random_normalized()
{
    return random() / static_cast<double>(UINT64_MAX);
}

double NoiseRNG::random_between(const double min, const double max)
{
    return random_normalized() * (max - min) + min;
}
