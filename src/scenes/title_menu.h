//
// Created by rryan on 11/1/2026.
//
#pragma once

#include "../enemy/enemy.h"
#include "../player/player.h"
#include "lantern/scene/scene.h"

class TitleMenu : public Scene {
public:
    explicit TitleMenu(AssetStore& asset_store) : Scene(asset_store), player(assets), enemy(assets, player) {}

    void Enter() override;
    void Update(float dt) override;
    void Draw() override;

private:
    Player player;
    Enemy enemy;
};