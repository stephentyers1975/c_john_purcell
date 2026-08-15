#pragma once
#include <stdio.h>
#include <SDL3/SDL.h>

typedef struct {
    char title[20];
    int height;
    int width;
    SDL_Window *window;
    SDL_Renderer *renderer;
    SDL_Texture *texture;
    uint32_t *buffer;
} sdl_t;

// function prototypes

// Initialise function
sdl_t create_app(int width, int height, const char* title);
// Event loop function
void event_loop(sdl_t app);
// Destroy function
void destroy_app(sdl_t app);
