//
// Created by rryan on 11/1/2026.
//
#pragma once

#include "../enemy/enemy.h"
#include "../player/player.h"
#include "lantern/scene/scene.h"

class TitleMenu : public Scene {
public:
    explicit TitleMenu(AssetStore& asset_store) : Scene(asset_store), player(assets) {}

    void Enter() override;
    void Update(float dt) override;
    void Draw() override;

private:
    Player player;
    std::vector<Enemy> enemies;
    float enemy_spawn_timer = 5.f;
    float spawn_progress = 0.f;
};