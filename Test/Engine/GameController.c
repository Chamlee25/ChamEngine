//
// Created by Chamlee25 on 15.05.2021.
//

#include <stdio.h>
#include "ChamEngine.h"


struct GameObject Map;
struct GameObject SnakeHead;
struct GameObject SnakeBody;
struct GameObject Apple;


int direction = 0;
//    0 = up
//    1 = down
//    2 = right
//    3 = left

float SnakeX;
float SnakeY;

float speed = 0.15;

int AppleX, AppleY;


void Setup(){

    

    initialize(&Map, 0,0,WIDTH,HEIGHT,"Assets/mapa.png", 0);
    initialize(&SnakeHead,0,0,50,50,"Assets/HadHlavaUp.png",3);
    initialize(&SnakeBody,0, -50, 50,50,"Assets/HadTělo.png",2);
    initialize(&Apple, AppleX, AppleY, 50,50,"Assets/Jablko.png",1);




    SnakeX = (float) SnakeHead.p.x;
    SnakeY = (float) SnakeHead.p.y;




}


void Update(double deltaTime){



    if(direction == 0){
        SnakeY += speed * deltaTime;
        changeTexture("Assets/HadHlavaUp.png",SnakeHead);
    }
    if(direction == 1){
        SnakeY -= speed * deltaTime;
        changeTexture("Assets/HadHlavaDown.png",SnakeHead);
    }
    if(direction == 2){
        SnakeX += speed * deltaTime;
        changeTexture("Assets/HadHlavaRight.png",SnakeHead);
    }
    if(direction == 3){
        SnakeX -= speed * deltaTime;
        changeTexture("Assets/HadHlavaLeft.png",SnakeHead);
    }



    changePositionTo((int)SnakeX,(int)SnakeY, SnakeHead);


}

void handleInput(int *Engine_isRunning, SDL_Event *event){

    if(event->key.keysym.sym == SDLK_ESCAPE){
        *Engine_isRunning =0;
    }
    if(event->key.keysym.sym == SDLK_w){
        if(direction-1)
            direction = 0;
    }
    if(event->key.keysym.sym == SDLK_s){
        if(direction)
            direction = 1;
    }
    if(event->key.keysym.sym == SDLK_d){
        if(direction -3)
            direction = 2;
    }
    if(event->key.keysym.sym == SDLK_a){
        if(direction -2)
            direction = 3;
    }
}

