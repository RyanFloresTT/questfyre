//
// Created by rryan on 11/1/2026.
//

#include "title_menu.h"

void TitleMenu::Enter() {
    Scene::Enter();
}

void TitleMenu::Update(float dt) {
    player.Update(dt);
}

void TitleMenu::Draw() {
    player.Draw();
}