//
// Created by Chamlee25 on 15.05.2021.
//

#include <stdio.h>
#include "ChamEngine.h"

void Setup(){
    struct GameObject g;
    setPosition(0,0,&g.p);
    setScale(100,100,&g.s);
    create_GameObject(&g,"Engine/Assets/mapa.png",g.p,g.s);
}


void Update(){

}

void handleInput(int *Engine_isRunning, SDL_Event *event){

    if(event->key.keysym.sym == SDLK_ESCAPE){
        *Engine_isRunning =0;
    }
}

