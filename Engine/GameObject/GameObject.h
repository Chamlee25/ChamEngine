//
// Created by Chamlee25 on 14.05.2021.
//

#ifndef CHAMENGINE_GAMEOBJECT_H
#define CHAMENGINE_GAMEOBJECT_H

#include "sdl_render.h"

#include "Transform/Transform.h"
#include "Colliders/Collider.h"

SDL_Renderer *renderer;
SDL_Texture *target_tex;

typedef struct GameObject{
    char PicturePath[100];
    struct Position p;
    struct Scale s;
    int ID;
    struct Collider col;

};

typedef struct RenderDataForObject{
    SDL_Texture *tex;
    struct Scale scale;
    struct Position position;
    int ID;
    int visible;

};

void create_GameObject(struct GameObject *g, char PicturePath[100], struct Position p, struct Scale s, int ID);

void changePositionTo(int x, int y, struct GameObject g);
void changeScale(int width, int height, struct GameObject g);
void changeTexture(char path[], struct GameObject g);
enum Visibility{
    Visible = 1,
    Invisible = 0
};

void setVisible(int visibility, struct GameObject g);




int isColliding(struct GameObject g1, struct GameObject g2);

void renderObjects();

#endif //CHAMENGINE_GAMEOBJECT_H
