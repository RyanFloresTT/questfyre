#pragma once
#include "raylib.h"
#include "../assets.h"
#include "lantern/raii/asset_scope.h"

class Player {
public:
    explicit Player(AssetScope& assets) : assets(assets) {
        assets.Load<Texture2D>(Assets::Player::DEFAULT);

        position.x = GetScreenWidth() / 2;
        position.y = GetScreenHeight() / 2;

        TraceLog(LOG_INFO, "Half Screen Size : %d : %d", GetScreenWidth() / 2, GetScreenHeight() / 2);
    }
    void     Update(float dt);
    void     Draw() const;

private:
    const float width = 64.f;
    const float height = 64.f;
    AssetScope& assets;
    Vector2 position = {};
    float speed = 1000;
};
