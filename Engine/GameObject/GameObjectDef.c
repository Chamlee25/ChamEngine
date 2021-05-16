//
// Created by Chamlee25 on 14.05.2021.
//
#include <stdio.h>

#include <SDL_image.h>
#include <SDL.h>
#include "GameObject.h"

#define MAX_OBJECTS 1000

struct RenderDataForObject RenderDatas[MAX_OBJECTS];


void create_GameObject(struct GameObject *g, char PicturePath[100], struct Position p, struct Scale s){
    SDL_Texture *img = NULL;
    img = IMG_LoadTexture(renderer, PicturePath);
   // SDL_Rect rect;
   // setBounds(p.x,p.y,s.width,s.height,&rect);

    for(int i =0; i<sizeof(RenderDatas); i++){
        if(RenderDatas[i].tex==NULL){
            RenderDatas[i].tex = img;
            RenderDatas[i].scale = s;
            RenderDatas[i].position = p;
            break;
        }
    }



   // SDL_RenderCopy(renderer, img, NULL, &rect);

}


void renderObjects(){
    for(int i =0; i<sizeof(RenderDatas); i++){
        if(RenderDatas[i].tex==NULL){
            break;
        }
        SDL_Rect rect;
        setBoundsfromTransform(RenderDatas[i].position,RenderDatas[i].scale, &rect);
        SDL_RenderCopy(renderer, RenderDatas[i].tex, NULL, &rect);

    }
}


