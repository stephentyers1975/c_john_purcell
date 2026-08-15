#include <SDL3/SDL.h>
#include "refactor.h"
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

// Initialise function
sdl_t create_app(int width, int height, const char *title) {

    sdl_t app = {0};
    app.width = width;
    app.height = height;
    strcpy(app.title, title);
    // strcpy(app.title, title);
	app.window = SDL_CreateWindow(title, width, height, 0);

    if (app.window == NULL) 
	{
		fprintf(stderr, "Unable to create window: %s\n", SDL_GetError());
		exit(EXIT_FAILURE);
	}
    app.renderer = SDL_CreateRenderer(app.window, NULL);

    if (app.renderer == NULL) 
	{
		fprintf(stderr, "Unable to create renderer: %s\n", SDL_GetError());
		exit(EXIT_FAILURE);
	}

    app.texture = SDL_CreateTexture(app.renderer, SDL_PIXELFORMAT_XRGB8888, SDL_TEXTUREACCESS_STATIC, width, height);

    if (app.texture == NULL) 
	{
		fprintf(stderr, "Unable to create texture: %s\n", SDL_GetError());
		exit(EXIT_FAILURE);
	}
    /*
     * Buffer for drawing pixels.
     */
    app.buffer = malloc(width*height*4);

    if(app.buffer == NULL)
    {
        fprintf(stderr, "Unable to allocate buffer.\n");
        exit(EXIT_FAILURE);
    }

    for(int i=0; i<app.width*app.height; ++i)
    {
        app.buffer[i] = 0xFF00FF00;
    }
    printf("%s\n", app.title);
    return app;
}

void event_loop(sdl_t app){

    bool running = true;

    while(running)
    {
        SDL_Event event;
        while (SDL_PollEvent(&event)) 
        {
            if (event.type == SDL_EVENT_QUIT) 
            {
                running = false;
            }
            else if (event.type == SDL_EVENT_KEY_UP && event.key.key == SDLK_ESCAPE)
            {
                running = false;
            }
        }

        /*
         * Draw on the screen.
         */
        if(SDL_UpdateTexture(app.texture, 
            NULL, 
            app.buffer, 
            app.width * 4) == false)
        {
            printf("Error updating texture: %s\n", SDL_GetError());
            exit(EXIT_FAILURE);
        }
    
        SDL_RenderClear(app.renderer);
        SDL_RenderTexture(app.renderer, app.texture, NULL, NULL);
        SDL_RenderPresent(app.renderer);

        SDL_Delay(2);
    }

}


void destroy_app(sdl_t app){
    printf("Destroying\n");
    free(app.buffer);
    SDL_DestroyTexture(app.texture);
    SDL_DestroyRenderer(app.renderer);
    SDL_DestroyWindow(app.window);
    SDL_Quit();
}
