//
// Created by rryan on 11/1/2026.
//
#include "player.h"

#include "raymath.h"
#include "../assets.h"

Vector2 GetMovementDirection() {
    const float up = IsKeyDown(KEY_W) ? 1.f : 0.f;
    const float down = IsKeyDown(KEY_S) ? 1.f : 0.f;
    const float left = IsKeyDown(KEY_A) ? 1.f: 0.f;
    const float right = IsKeyDown(KEY_D) ? 1.f : 0.f;

    Vector2 direction = {};
    direction.x = right - left;
    direction.y = down - up;

    return Vector2Normalize(direction);
}

void Player::Update(const float dt) {
    position += GetMovementDirection() * dt * speed;
}

void Player::Draw() const {
    const auto player_texture = assets.Get<Texture2D>(Assets::Player::DEFAULT);
    DrawTexture(player_texture, position.x, position.y, WHITE);
}
