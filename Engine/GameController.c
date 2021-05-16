//
// Created by Chamlee25 on 15.05.2021.
//

#include <stdio.h>
#include "ChamEngine.h"

void Setup(){

    struct GameObject mapa;
    setPosition(0,0,&mapa.p);
    setScale(WIDTH,HEIGHT,&mapa.s);
    create_GameObject(&mapa,"Assets/mapa.png",mapa.p,mapa.s);

    struct GameObject m;
    setPosition(50,40,&mapa.p);
    setScale(500,100,&mapa.s);
    create_GameObject(&mapa,"Assets/mapa.png",mapa.p,mapa.s);



}


void Update(){

}

void handleInput(int *Engine_isRunning, SDL_Event *event){

    if(event->key.keysym.sym == SDLK_ESCAPE){
        *Engine_isRunning =0;
    }
}

