//
// Created by rryan on 11/1/2026.
//

#include "title_menu.h"

void TitleMenu::Enter() {
    Scene::Enter();
}

void TitleMenu::Update(float dt) {
    if (IsKeyPressed(KEY_SPACE)) {
        done = true;
    }
}

void TitleMenu::Draw() {
    DrawText("Hello World", 10, 10, 20, BLACK);
}