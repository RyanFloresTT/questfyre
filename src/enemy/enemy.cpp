//
// Created by rryan on 11/3/2026.
//

#include "enemy.h"

#include "raymath.h"
#include "../player/player.h"

Vector2 Enemy::GetMovementDirection() {
    const Vector2 direction = player.GetPosition() - position;

    return Vector2Normalize(direction);
}

void Enemy::Update(float dt) {
    position += GetMovementDirection() * dt * speed;

    position.x = Clamp(position.x, 0.f, static_cast<float>(GetScreenWidth()) - width);
    position.y = Clamp(position.y, 0.f, static_cast<float>(GetScreenHeight()) - height);
}

void Enemy::Draw() const {
    const auto texture = assets.Get<Texture2D>(Assets::Enemy::CYCLOPS);

    Rectangle source = { 0, 0, static_cast<float>(texture.width), static_cast<float>(texture.height) };
    Rectangle dest = { position.x, position.y, width, height };

    DrawTexturePro(texture, source, dest, {}, 0.f, WHITE);
}