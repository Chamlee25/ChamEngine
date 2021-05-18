//
// Created by Chamlee25 on 14.05.2021.
//
#include <stdio.h>

#include <SDL_image.h>
#include <SDL.h>
#include "GameObject.h"

#define MAX_OBJECTS 1000

struct RenderDataForObject RenderDatas[MAX_OBJECTS];


void create_GameObject(struct GameObject *g, char PicturePath[100], struct Position p, struct Scale s, int ID){
    SDL_Texture *img = NULL;
    img = IMG_LoadTexture(renderer, PicturePath);
    g->ID = ID;
    g->p = p;
    g->s = s;
    struct Collider col;
    col.height = s.height;
    col.width = s.width;
    g->col = col;


    RenderDatas[ID].tex = img;
    RenderDatas[ID].scale= s;
    RenderDatas[ID].position = p;
    RenderDatas[ID].ID = ID;
    RenderDatas[ID].visible = 1;







}


void renderObjects(){
    for(int i =0; i<sizeof(RenderDatas); i++){
        if(RenderDatas[i].tex==NULL)
            break;
        if(RenderDatas[i].visible == Invisible)
            continue;
        SDL_Rect rect;
        setBoundsfromTransform(RenderDatas[i].position,RenderDatas[i].scale, &rect);
        SDL_RenderCopy(renderer, RenderDatas[i].tex, NULL, &rect);

    }
}

void changePositionTo(int x, int y, struct GameObject g){
    g.p.x = x;
    g.p.y = y;
    for(int i =0; i<sizeof(RenderDatas); i++){

        if(RenderDatas[i].ID == g.ID){

            RenderDatas[i].position.x =x;
            RenderDatas[i].position.y=y;
            break;
        }
    }
}




void changeScale(int width, int height, struct GameObject g){
    g.s.height = height;
    g.s.width = width;
    for(int i =0; i<sizeof(RenderDatas); i++){
        if(RenderDatas[i].ID == g.ID){
            RenderDatas[i].scale.height = height;
            RenderDatas[i].scale.width = width;
            break;
        }
    }
}

void initialize(struct GameObject *g, int x, int y, int width, int height, char path[], int ID){
    setPosition(x,y,&g->p);
    setScale(width,height,&g->s);
    create_GameObject(g,path,g->p,g->s, ID);
}

void changeTexture(char path[], struct GameObject g){
    SDL_Texture *texture = IMG_LoadTexture(renderer, path);
    RenderDatas[g.ID].tex = texture;

}

void setVisible(int visibility, struct GameObject g){
    RenderDatas[g.ID].visible = visibility;
}

int isColliding(struct GameObject g1, struct GameObject g2){
    if(g1.p.x == g2.p.x && g1.p.y == g2.p.y)
        return 1;
    int x1 = g1.p.x;
    int x2 = g2.p.x;
    int y1 = g1.p.y;
    int y2 = g2.p.y;

    int w1 = g1.s.width;
    int w2 = g2.s.width;
    int h1 = g1.s.height;
    int h2 = g2.s.height;


}