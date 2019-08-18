#include "sdl_tetris.hpp"

#include <iostream>

using std::cout;
using std::endl;

const char* game_title = "SDL Tetris";

const int screen_width = 800;
const int screen_height = 800;

SDLTetris::SDLTetris() {}

void SDLTetris::start_game() {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        cout << "Failed to initialize! SDL_Error: " << SDL_GetError() << endl;
    } else {
        window = SDL_CreateWindow(game_title, SDL_WINDOWPOS_UNDEFINED,
                SDL_WINDOWPOS_UNDEFINED, screen_width, screen_height,
                SDL_WINDOW_SHOWN);
        if (window == NULL) {
            cout << "Failed to create window! SDL_Error: " << SDL_GetError() << endl;
        } else {
            renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
        }
    }
}
