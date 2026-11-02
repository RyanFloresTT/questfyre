#pragma once
#include "raylib.h"

// Move these to Lantern
inline Vector2 operator+=(Vector2& lhs, const Vector2& rhs) {
    lhs.x += rhs.x;
    lhs.y += rhs.y;
    return lhs;
}

inline Vector2 operator-=(Vector2& lhs, const Vector2& rhs) {
    lhs.x -= rhs.x;
    lhs.y -= rhs.y;
    return lhs;
}

inline Vector2 operator*(const Vector2& lhs, float rhs) {
    return Vector2(lhs.x * rhs, lhs.y * rhs);
}