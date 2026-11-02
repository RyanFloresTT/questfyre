cmake_minimum_required(VERSION 4.2)
project(questfyre)

include(FetchContent)

FetchContent_Declare(raylib
        GIT_REPOSITORY https://github.com/raysan5/raylib.git
        GIT_TAG 5.5
        GIT_SHALLOW TRUEz
)
set(BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(raylib)

FetchContent_Declare(
        lantern
        GIT_REPOSITORY https://github.com/RyanFloresTT/lantern.git
        GIT_TAG lantern-v0.1.0
)
FetchContent_MakeAvailable(lantern)

set(CMAKE_CXX_STANDARD 20)

add_executable(questfyre src/main.cpp
        src/assets.h
        src/scenes/title_menu.h
        src/scenes/title_menu.cpp)

target_link_libraries(questfyre PRIVATE raylib lantern)
