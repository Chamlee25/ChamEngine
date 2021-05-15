//
// Created by Chamlee25 on 14.05.2021.
//
#include <stdio.h>

#include <SDL_image.h>
#include <SDL.h>
#include "GameObject.h"

SDL_Renderer *render = NULL;

void create_GameObject(struct GameObject *g, char PicturePath[100], struct Position p, struct Scale s){
    SDL_Texture *img;
    img = IMG_LoadTexture(render, PicturePath);
    SDL_Rect rect;
    setBounds(p.x,p.y,s.width,s.height,&rect);



    SDL_RenderCopy(render, img, NULL, &rect);

}

void setRenderer(SDL_Renderer **renderer){
    render = renderer;
}
