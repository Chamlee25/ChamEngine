//
// Created by Chamlee25 on 15.05.2021.
//

#include <stdio.h>
#include "ChamEngine.h"

void Setup(){

    struct GameObject g;
    setPosition(0,0,&g.p);
    setScale(WIDTH,HEIGHT,&g.s);
    create_GameObject(&g,"Assets/mapa.png",g.p,g.s);


    struct GameObject go;
    setPosition(0,0,&go.p);
    setScale(100,100,&go.s);
    create_GameObject(&go,"Assets/mapa.png",go.p,go.s);

}


void Update(){

}

void handleInput(int *Engine_isRunning, SDL_Event *event){

    if(event->key.keysym.sym == SDLK_ESCAPE){
        *Engine_isRunning =0;
    }
}

