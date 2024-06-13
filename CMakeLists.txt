cmake_minimum_required(VERSION 3.8)

project(Platformer)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(Game/include)
include_directories(Game/SDL/include)

add_executable(${PROJECT_NAME} Game/main.cpp)

target_sources(${PROJECT_NAME} PRIVATE
    Game/src/HelloWorld.cpp
)

target_link_libraries(${PROJECT_NAME} PRIVATE
    ${CMAKE_SOURCE_DIR}/Game/SDL/lib/libSDL2.a
    #${CMAKE_SOURCE_DIR}/Game/SDL/lib/libSDL2_image.a
    mingw32
    SDL2main
    SDL2
    #SDL2_image
)