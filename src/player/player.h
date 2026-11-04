#pragma once
#include "../assets.h"
#include "../entity/entity.h"

class Player : public Entity {
public:
    explicit Player(AssetScope& assets) : Entity(assets) {
        assets.Load<Texture2D>(Assets::Player::DEFAULT);

        position.x = GetScreenWidth() / 2;
        position.y = GetScreenHeight() / 2;
    }

    void     Update(float dt) override;
    void     Draw() const override;
    [[nodiscard]] Vector2 GetPosition() const {return position;}
    Vector2 GetMovementDirection() override;
};
