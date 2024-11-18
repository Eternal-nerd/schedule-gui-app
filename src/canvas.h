#pragma once

#include <SDL2/SDL.h>

#include "color.h"

class canvas {
public:
  canvas();
  ~canvas();

  SDL_Window *getWindowPtr();

  void testDraw();

  // TODO make private with getters, so outside code cant mess it up
  int width;
  int height;

private:
  SDL_Window *win = nullptr;
  SDL_Surface *surf = nullptr;

  void init(int w, int h);

  void cleanup();

  void drawPixel(int xPos, int yPos, const color &c);

  void clear(const color &c);
};
