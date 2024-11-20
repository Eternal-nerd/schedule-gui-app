/* scaling-textures.c ... */

/*
 * This example creates an SDL window and renderer, and then draws some
 * textures to it every frame.
 *
 * This code is public domain. Feel free to use it for any purpose!
 */

#define SDL_MAIN_USE_CALLBACKS 1 /* use the callbacks instead of main() */
#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>
#include <SDL3_image/SDL_image.h>

#include <iostream>
#include <stdio.h>
#include <string>

/* We will use this renderer to draw into this window every frame. */
static SDL_Window *window = NULL;
static SDL_Renderer *renderer = NULL;
SDL_Texture *texture = NULL;
float texture_width = 0;
float texture_height = 0;

#define WINDOW_WIDTH 640
#define WINDOW_HEIGHT 480

/* This function runs once at startup. */
SDL_AppResult SDL_AppInit(void **appstate, int argc, char *argv[]) {
  if (!SDL_Init(SDL_INIT_VIDEO)) {
    SDL_Log("Couldn't initialize SDL: %s", SDL_GetError());
    return SDL_APP_FAILURE;
  }

  if (!SDL_CreateWindowAndRenderer("TestAppGear", WINDOW_WIDTH, WINDOW_HEIGHT,
                                   0, &window, &renderer)) {
    SDL_Log("Couldn't create window/renderer: %s", SDL_GetError());
    return SDL_APP_FAILURE;
  }

  /* Textures are pixel data that we upload to the video hardware for fast
     drawing. Lots of 2D engines refer to these as "sprites." We'll do a static
     texture (upload once, draw many times) with data from a bitmap file. */

  /* SDL_Surface is pixel data the CPU can access. SDL_Texture is pixel data the
     GPU can access. Load a .bmp into a surface, move it to a texture from
     there. */

  // init for PNG
  // IMG_Init(IMG_INIT_PNG);
  texture = IMG_LoadTexture(renderer, "../res/set.png");
  if (!texture) {
    SDL_Log("Couldn't create texture: %s", SDL_GetError());
    return SDL_APP_FAILURE;
  }

  if (!SDL_GetTextureSize(texture, &texture_width, &texture_height)) {
    SDL_Log("Couldn't check texture size?: %s", SDL_GetError());
    return SDL_APP_FAILURE;
  }

  return SDL_APP_CONTINUE; /* carry on with the program! */
}

/* This function runs when a new event (mouse input, keypresses, etc) occurs. */
SDL_AppResult SDL_AppEvent(void *appstate, SDL_Event *event) {
  if (event->type == SDL_EVENT_QUIT) {
    return SDL_APP_SUCCESS; /* end the program, reporting success to the OS. */
  }
  return SDL_APP_CONTINUE; /* carry on with the program! */
}

/* This function runs once per frame, and is the heart of the program. */
SDL_AppResult SDL_AppIterate(void *appstate) {
  SDL_FPoint center;
  SDL_FRect dst_rect;
  const Uint64 now = SDL_GetTicks();

  /* we'll have a texture rotate around over 2 seconds (2000 milliseconds). 360
   * degrees in a circle! */
  const float rotation = (((float)((int)(now % 1000))) / 1000.0f) * 360.0f;

  /* as you can see from this, rendering draws over whatever was drawn before
   * it. */
  SDL_SetRenderDrawColor(renderer, 255, 255, 255,
                         SDL_ALPHA_OPAQUE); /* black, full alpha */
  SDL_RenderClear(renderer);                /* start with a blank canvas. */

  /* Center this one, and draw it with some rotation so it spins! */
  dst_rect.w = texture_width / 3.0f;
  dst_rect.h = texture_height / 3.0f;
  dst_rect.x = ((float)(WINDOW_WIDTH - dst_rect.w)) / 2.0f;
  dst_rect.y = ((float)(WINDOW_HEIGHT - dst_rect.h)) / 2.0f;

  /* rotate it around the center of the texture; you can rotate it from a
   * different point, too! */
  center.x = dst_rect.w / 2.0f;
  center.y = dst_rect.h / 2.0f;
  SDL_RenderTextureRotated(renderer, texture, NULL, &dst_rect, rotation,
                           &center, SDL_FLIP_NONE);

  SDL_RenderPresent(renderer); /* put it all on the screen! */

  return SDL_APP_CONTINUE; /* carry on with the program! */
}

/* This function runs once at shutdown. */
void SDL_AppQuit(void *appstate, SDL_AppResult result) {
  SDL_DestroyTexture(texture);
  /* SDL will clean up the window/renderer for us. */
}
