#pragma once

#include <SDL3/SDL.h>

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
 };
