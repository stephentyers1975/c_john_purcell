#include <SDL.h>
#include <stdio.h>

int main(int argc, char* argv[]) {
    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        printf("SDL Init Error: %s\n", SDL_GetError());
        return 1;
    }

    SDL_Window* win = SDL_CreateWindow("Hello SDL2", 100, 100, 640, 480, SDL_WINDOW_SHOWN);
    if (!win) {
        printf("Window Creation Error: %s\n", SDL_GetError());
        SDL_Quit();
        return 1;
    }

    // Create a renderer to satisfy Wayland/Fedora presentation requirements
    SDL_Renderer* renderer = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED);

    // Clear the screen (turns it blue-ish/black) and present it
    SDL_SetRenderDrawColor(renderer, 124, 120, 120, 120);
    SDL_RenderClear(renderer);
    SDL_RenderPresent(renderer);

    // Keep the window open for 3 seconds while properly handling events
    Uint32 start_time = SDL_GetTicks();
    SDL_Event e;
    
    while (SDL_GetTicks() - start_time < 8000) {
        while (SDL_PollEvent(&e)) {
            if (e.type == SDL_QUIT) {
                break;
            }
        }
    }

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(win);
    SDL_Quit();
    return 0;
}
