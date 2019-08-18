/**
 * Represents the entire SDL Tetris game session.
 */

#include <SDL2/SDL.h>

class SDLTetris {
    public:
        SDLTetris();

        void start_game();

    private:
        SDL_Window* window;
        SDL_Renderer* renderer;

        bool running;

        void quit_game();
};
