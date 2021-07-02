#include <stdio.h>
#include <SDL.h>

#include "Engine/Input/InputHandler.h"
#include "Engine/GameObject/GameObject.h"
#include "Engine/ChamEngine.h"



int main(int argc, char* args[]) {

    //setup
    SDL_Window *win = NULL;

    if (SDL_Init(SDL_INIT_VIDEO) < 0)
        return 1;
    
    char GAME_NAME[30];
    setGameName(&GAME_NAME);
    printf(GAME_NAME);

    win = SDL_CreateWindow(GAME_NAME, 0,25, WIDTH, HEIGHT, 0);
   // SDL_SetWindowFullscreen(win, FULLSCREEN);
    renderer = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED);


    target_tex = NULL;
    SDL_SetRenderTarget(renderer, target_tex);

    //setup for gameEngine
    Setup();
    renderObjects();
    SDL_RenderPresent(renderer);

    Uint64 NOW = SDL_GetPerformanceCounter();
    Uint64 LAST = 0;
    double deltaTime = 0;


    int Engine_isRunning = 1;
    while(Engine_isRunning){
        LAST = NOW;
        NOW = SDL_GetPerformanceCounter();

        deltaTime = (double)((NOW - LAST)*1000 / (double)SDL_GetPerformanceFrequency() );


        SDL_Event e;
        handleInput(&Engine_isRunning, &e);
        Update(deltaTime);
        if(SDL_PollEvent(&e)){
            if(e.type == SDL_QUIT)
                break;
        }

        SDL_RenderClear(renderer);
        renderObjects();
        SDL_RenderCopy(renderer, target_tex, NULL, NULL);
        SDL_RenderPresent(renderer);



    }
    return 0;
}
