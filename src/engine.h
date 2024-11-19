#pragma once

#include <SDL3/SDL.h>

#include "color.h"

class engine {
public:
  engine();
  ~engine();

  void run();

private:
  int width_ = 0;
  int height_ = 0;

  SDL_Window *win_ = nullptr;
  SDL_Surface *surf_ = nullptr;

  void init(int w, int h);

  void cleanup();

  void drawPixel(int xPos, int yPos, const color &c);

  void clear(const color &c);

  void testDraw();
};
