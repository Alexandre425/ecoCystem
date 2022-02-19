#pragma once

#include <glm/glm.hpp>

/**
 * @brief Low pass filter compensating for delta time
 *
 * @tparam T Any type that can perform addition, multiplication and division, and multiplication with a scalar
 * @param val The current value
 * @param new_val The new sample
 * @param K The filter's constant
 * @param delta Delta time
 * @return T The new value
 */
template<typename T> inline
T low_pass_filter(const T &val, const T &new_val, const float &K, const float &delta)
{
    float k = K * delta;
    return (val + k * new_val) / (1 + k);
}

/**
 * @brief Low pass filter
 *
 * @tparam T Any type that can perform addition, multiplication and division, and multiplication with a scalar
 * @param val The current value
 * @param new_val The new sample
 * @param K The filter's constant
 * @return T The new value
 */
template<typename T> inline
T low_pass_filter(const T &val, const T &new_val, const float &K)
{
    return K * val + (1 - K) * new_val;
}

// 2-component vector
struct Vec2
{
    double x, y;

    Vec2() = default;
    Vec2(double x, double y)
        : x(x), y(y) {}
    double length() const
    {
        return glm::sqrt(x * x + y * y);
    };

    double length2() const
    {
        return x * x + y * y;
    };

    void normalize()
    {
        double len = length();
        x /= len;
        y /= len;
    }

    Vec2 get_normalized()
    {
        Vec2 vec(*this);
        vec.normalize();
        return vec;
    }
};

inline Vec2 operator+(const Vec2 &a, const Vec2 &b) {return {a.x + b.x, a.y + b.y};}
inline Vec2 operator-(const Vec2 &a, const Vec2 &b) {return {a.x - b.x, a.y - b.y};}
inline Vec2 operator*(const Vec2 &a, const Vec2 &b) {return {a.x * b.x, a.y * b.y};}
inline Vec2 operator*(const Vec2 &a, const double k) {return {a.x * k , a.y * k};}
inline Vec2 operator*(const double k, const Vec2 &a) {return {a.x * k , a.y * k};}
inline Vec2 operator/(const Vec2 &a, const double k) {return {a.x / k , a.y / k};}

// A normalized RGB color
struct Color
{
    float r,g,b;

    Color() = default;
    Color(float r, float g, float b)
        : r(r), g(g), b(b) {}
};