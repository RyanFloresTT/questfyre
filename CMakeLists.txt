cmake_minimum_required(VERSION 4.2)
project(questfyre)

include(FetchContent)

FetchContent_Declare(
        lantern
        GIT_REPOSITORY https://github.com/RyanFloresTT/lantern.git
        GIT_TAG lantern-v0.1.0
)
FetchContent_MakeAvailable(lantern)

set(CMAKE_CXX_STANDARD 20)

add_executable(questfyre main.cpp)
