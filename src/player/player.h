#pragma once
#include "raylib.h"
#include "../assets.h"
#include "lantern/raii/asset_scope.h"

class Player {
public:
    explicit Player(AssetScope& assets) : assets(assets) {
        assets.Load<Texture2D>(Assets::Player::DEFAULT);
    }
    void     Update(float dt);
    void     Draw() const;

private:
    AssetScope& assets;
    Vector2 position = {};
    float speed = 100;
};
