/*
  screen.h
  
  Super Tux - Screen Functions
  
  by Bill Kendrick
  bill@newbreedsoftware.com
  http://www.newbreedsoftware.com/supertux/
  
  April 11, 2000 - February 1, 2004
*/

#ifndef SUPERTUX_SCREEN_H
#define SUPERTUX_SCREEN_H

#include <SDL.h>
#ifndef NOOPENGL
#include <SDL_opengl.h>
#endif
#include "texture.h"

#define NO_UPDATE 0
#define UPDATE 1
#define USE_ALPHA 0
#define IGNORE_ALPHA 1

void load_and_display_image(char * file);
void clearscreen(float r, float g, float b);
void fillrect(float x, float y, float w, float h, float r, float g, float b);
void updatescreen(void);
void flipscreen(void);
SDL_Surface * load_image(char * file, int use_alpha);
void erasetext(char * text, int x, int y, texture_type * surf, int update, int shadowsize);
void erasecenteredtext(char * text, int y, texture_type * surf, int update, int shadowsize);
void update_rect(SDL_Surface *scr, Sint32 x, Sint32 y, Sint32 w, Sint32 h);

#endif /*SUPERTUX_SCREEN_H*/
