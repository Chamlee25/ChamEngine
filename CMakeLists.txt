cmake_minimum_required(VERSION 3.19)
project(ChamEngine C)

set(CMAKE_C_STANDARD 99)

set(SDL2_INCLUDE_DIR D:/programming/C_libraries/sdl_mingw/include)
set(SDL2_LIB_DIR D:/programming/C_libraries/sdl_mingw/lib/x64)

set(SDL2_PICTURE_INCLUDE D:/programming/C_libraries/sdl2_image/x86_64-w64-mingw32/include/SDL2)
set(SDL2_PICTURE_LIB D:/programming/C_libraries/sdl2_image/x86_64-w64-mingw32/lib)

include_directories(${SDL2_INCLUDE_DIR})
include_directories(${SDL2_PICTURE_INCLUDE})


link_directories(${SDL2_PICTURE_LIB})
link_directories(${SDL2_LIB_DIR})



add_executable(ChamEngine main.c Engine/Input/InputHandler.h Engine/Input/InputHandlerDef.c Engine/GameObject/GameObject.h Engine/GameObject/Transform/Transform.h Engine/GameObject/GameObjectDef.c)

target_link_libraries(${PROJECT_NAME} SDL2main SDL2_image SDL2)