//
// Created by Chamlee25 on 15.05.2021.
//

#ifndef CHAMENGINE_CHAMENGINE_H
#define CHAMENGINE_CHAMENGINE_H

#include "GameObject/GameObject.h"
#include "Input/InputHandler.h"
#include <SDL_image.h>




void Setup();

void Update(double deltaTime);

void initialize(struct GameObject *g, int x, int y, int width, int height, char path[], int ID);


#endif //CHAMENGINE_CHAMENGINE_H
