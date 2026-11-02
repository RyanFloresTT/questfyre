//
// Created by rryan on 11/1/2026.
//
#include "player.h"
#include "../helpers/vectors.h"


void Player::Update(float dt) {

    // Player just moves forever, need to set to zero when not pressing it
    if (IsKeyDown(KEY_W)) {
        movement_direction.y += 1;
    }
    if (IsKeyDown(KEY_S)) {
        movement_direction.y -= -1;
    }
    if (IsKeyDown(KEY_A)) {
        movement_direction.x += -1;
    }
    if (IsKeyDown(KEY_D)) {
        movement_direction.x -= 1;
    }

    position += movement_direction * dt * speed;

    TraceLog(LOG_INFO, "Player position: %f, %f", position.x, position.y);
}

void Player::Draw() {
    DrawCircle(position.x, position.y, 10, RED);
}
