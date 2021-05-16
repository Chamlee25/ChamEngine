//
// Created by Chamlee25 on 15.05.2021.
//



#include <SDL_rect.h>
#include "Transform.h"

void setBounds(int X_position, int Y_position, int width, int height, SDL_Rect *rect){
    rect->x = WIDTH/2 - X_position - width/2;
    rect->y = HEIGHT/2 - Y_position - height/2;
    rect->w=width;
    rect->h=height;
}

void setBoundsfromTransform(struct Position p, struct Scale s, SDL_Rect *rect){
    rect->x = WIDTH/2 - p.x - s.width/2;
    rect->y = HEIGHT/2 - p.y - s.height/2;
    rect->w=s.width;
    rect->h=s.height;
}


void setPosition(int x, int y, struct Position *p){
    p->x =x;
    p->y=y;
}

void setScale(int width, int height, struct Scale *s){
    s->width=width;
    s->height=height;
}