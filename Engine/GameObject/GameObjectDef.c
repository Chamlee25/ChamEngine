//
// Created by Chamlee25 on 14.05.2021.
//
#include <stdio.h>

#include <SDL_image.h>
#include <SDL.h>
#include "GameObject.h"


void create_GameObject(struct GameObject *g, char PicturePath[100], struct Position p, struct Scale s){
    SDL_Texture *img = NULL;
    img = IMG_LoadTexture(renderer, PicturePath);
    SDL_Rect rect;
    setBounds(p.x,p.y,s.width,s.height,&rect);



    SDL_RenderCopy(renderer, img, NULL, &rect);

}


