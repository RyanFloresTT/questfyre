//
// Created by rryan on 11/1/2026.
//

#include "title_menu.h"

#include <format>


Vector2 GetRandomBounds() {
    return { 100, 100 };
}

void TitleMenu::Enter() {
    Scene::Enter();
}

void TitleMenu::Update(float dt) {
    player.Update(dt);

    for (auto& enemy : enemies) {
        enemy.Update(dt);
    }

    spawn_progress += dt;
    if (spawn_progress >= enemy_spawn_timer) {
        enemies.emplace_back(assets, player, GetRandomBounds());
        spawn_progress = 0.f;
    }
}

void TitleMenu::Draw() {
    player.Draw();

    for (const auto& enemy : enemies) {
        enemy.Draw();
    }

    std::string label = std::format("Health: {}", player.Health());
    DrawText(label.c_str(), 10, 10, 20, BLACK);
}