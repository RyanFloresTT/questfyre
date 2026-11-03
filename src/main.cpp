
#include "lantern/game/game.h"
#include "scenes/title_menu.h"

int main() {
    auto game = Game(1920, 1080, "QuestFyre", 60);
    //scope.Load<Music>();
    //scope.Load<Texture2D>();

    // const Music& music = scope.Get<Music>();

    //PlayMusicStream(music);
    //SetMusicVolume(music, 0.1f);
    //HideCursor();

    game.GetSceneManager().SetFrameCallback([&] {
        //UpdateMusicStream(music);
        const auto [x, y] = GetMousePosition();
        //DrawTexture(scope.Get<Texture2D>(Assets::Cursor::HAND_SMALL_POINT), static_cast<int>(x - 15), static_cast<int>(y - 10), WHITE);
    });

    game.GetSceneManager().GoTo<TitleMenu>();
    game.Run();
}
