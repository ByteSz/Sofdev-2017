#pragma once

#include <SDL.h>
#include <SDL_ttf.h>

TTF_Font* LoadFont (char* path);
int RenderText (char* str, SDL_Color color, TTF_Font* font);
