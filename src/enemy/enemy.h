#pragma once
#include "../assets.h"
#include "../entity/entity.h"

class Player;

class Enemy : public Entity {
public:
    explicit Enemy(AssetScope& assets, Player& player, const Vector2 spawn_pos) : Entity(assets), player(player) {
        assets.Load<Texture2D>(Assets::Enemy::CYCLOPS);

        position = spawn_pos;
        speed = 100;
    }

    void     Update(float dt) override;
    void     Draw() const override;
    Vector2 GetMovementDirection() override;

private:
    Player& player;
};
