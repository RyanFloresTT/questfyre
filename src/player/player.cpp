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

    position.x = Clamp(position.x, 0.f, static_cast<float>(GetScreenWidth()) - width);
    position.y = Clamp(position.y, 0.f, static_cast<float>(GetScreenHeight()) - height);
}

void Player::Draw() const {
    const auto player_texture = assets.Get<Texture2D>(Assets::Player::DEFAULT);

    Rectangle source = { 0, 0, static_cast<float>(player_texture.width), static_cast<float>(player_texture.height) };
    Rectangle dest = { position.x, position.y, width, height };

    DrawTexturePro(player_texture, source, dest, {}, 0.f, WHITE);
}
