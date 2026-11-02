#pragma once
#include "raylib.h"

class Player {
public:
    void Update(float dt);
    void Draw();

private:
    Vector2 movement_direction = {};
    Vector2 position = {};
    float speed = 20;
};
