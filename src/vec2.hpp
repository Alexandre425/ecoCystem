#pragma once

// 2-component vector
struct Vec2
{
    double x, y;

    Vec2() = default;
    Vec2(double x, double y)
        : x(x), y(y) {}

};

inline Vec2 operator+(const Vec2 &a, const Vec2 &b) {return {a.x + b.x, a.y + b.y};}
inline Vec2 operator*(const Vec2 &a, const Vec2 &b) {return {a.x * b.x, a.y * b.y};}
inline Vec2 operator*(const Vec2 &a, const double k) {return {a.x * k , a.y * k};}
inline Vec2 operator*(const double k, const Vec2 &a) {return {a.x * k , a.y * k};}
inline Vec2 operator/(const Vec2 &a, const double k) {return {a.x / k , a.y / k};}