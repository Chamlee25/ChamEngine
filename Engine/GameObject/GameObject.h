//
// Created by Chamlee25 on 14.05.2021.
//

#ifndef CHAMENGINE_GAMEOBJECT_H
#define CHAMENGINE_GAMEOBJECT_H

#include "sdl_render.h"

#include "Transform/Transform.h"

typedef struct GameObject{
    char PicturePath[100];
    struct Position p;
    struct Scale s;
};

void create_GameObject(char PicturePath[100], char Name[], struct Position p, struct Scale s);

void setRenderer(SDL_Renderer **renderer);


#endif //CHAMENGINE_GAMEOBJECT_H
