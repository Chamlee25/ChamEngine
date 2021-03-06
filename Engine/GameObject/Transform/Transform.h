//
// Created by Chamlee25 on 14.05.2021.
//

#ifndef CHAMENGINE_TRANSFORM_H
#define CHAMENGINE_TRANSFORM_H

#include "Window.h"


typedef struct Position{
    int x;
    int y;
};

typedef struct Scale{
    int width;
    int height;
};

void setBounds(int X_position, int Y_position, int width, int height, SDL_Rect *rect);
void setBoundsfromTransform(struct Position p, struct Scale s, SDL_Rect *rect);



void setPosition(int x, int y, struct Position *p);

void setScale(int width, int height, struct Scale *s);



#endif //CHAMENGINE_TRANSFORM_H
