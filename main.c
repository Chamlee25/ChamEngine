#include <stdio.h>
#include <SDL.h>

#include "Engine/Input/InputHandler.h"
#include "Engine/GameObject/GameObject.h"
#include "Engine/ChamEngine.h"

#define WIDTH 192
#define HEIGHT 155
#define FULLSCREEN 0

int main(int argc, char* args[]) {

    //setup
    SDL_Window *win = NULL;
    SDL_Renderer *renderer = NULL;
    if (SDL_Init(SDL_INIT_VIDEO) < 0)
        return 1;
    win = SDL_CreateWindow("Cham Engine", 0,25, WIDTH, HEIGHT, 0);
    SDL_SetWindowFullscreen(win, FULLSCREEN);
    renderer = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED);
    setRenderer(&renderer);


    Setup();

    int Engine_isRunning = 1;
    while(Engine_isRunning){
        SDL_Event e;
        handleInput(&Engine_isRunning, &e);
        Update();
        if(SDL_PollEvent(&e)){
            if(e.type == SDL_QUIT)
                break;
        }
    }
    return 0;
}
