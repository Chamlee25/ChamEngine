//
// Created by Chamlee25 on 14.05.2021.
//
#include <stdio.h>
#include "InputHandler.h"

void handleInput(int *Engine_isRunning, SDL_Event *e) {

    if (e->key.keysym.sym == SDLK_ESCAPE){
        *Engine_isRunning = 0;
    }


}

