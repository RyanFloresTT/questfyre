//
// Created by rryan on 11/1/2026.
//

#include "title_menu.h"

#include <format>

void TitleMenu::Enter() {
    Scene::Enter();
}

void TitleMenu::Update(float dt) {
    player.Update(dt);
    enemy.Update(dt);
}

void TitleMenu::Draw() {
    player.Draw();
    enemy.Draw();

    std::string label = std::format("Health: {}", player.Health());
    DrawText(label.c_str(), 10, 10, 20, BLACK);
}