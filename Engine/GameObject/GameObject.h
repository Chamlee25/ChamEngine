//
// Created by Chamlee25 on 14.05.2021.
//

#ifndef CHAMENGINE_GAMEOBJECT_H
#define CHAMENGINE_GAMEOBJECT_H

#include "sdl_render.h"

#include "Transform/Transform.h"

SDL_Renderer *renderer;

typedef struct GameObject{
    char PicturePath[100];
    struct Position p;
    struct Scale s;
};

void create_GameObject(struct GameObject *g, char PicturePath[100], struct Position p, struct Scale s);




#endif //CHAMENGINE_GAMEOBJECT_H
