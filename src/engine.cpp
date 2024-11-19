#include "engine.h"

#include <iostream>
#include <stdexcept>
#include <thread>

#include <SDL3/SDL.h>

engine::engine() { init(800, 600); }

engine::~engine() { cleanup(); }

void engine::init(int w, int h) {
  width_ = w;
  height_ = h;

  // init SDL
  if (!SDL_Init(SDL_INIT_VIDEO)) {
    throw std::runtime_error("Failed to initialize SDL. ");
  }

  // create SDL window
  win_ = SDL_CreateWindow("Schedule App", width_, height_, 0);
  if (!win_) {
    throw std::runtime_error("Failed to create SDL window. ");
  }

  if (!SDL_SetWindowResizable(win_, true)) {
    throw std::runtime_error("Failed to make window resizable. ");
  }

  surf_ = SDL_GetWindowSurface(win_);
}

void engine::run() {
  // Main loop flag
  bool quit = false;
  bool resized = false;

  // FIXME
  testDraw();

  // Event handler
  SDL_Event e;

  // While application is running
  while (!quit) {
    // Handle events on queue
    while (SDL_PollEvent(&e) != 0) {
      switch (e.type) {
      case SDL_EVENT_QUIT: // User requests quit
        quit = true;
        break;
        /*
case SDL_KEYDOWN:
case SDL_KEYUP:
  in->takeInput(e);
  break;
case SDL_WINDOWEVENT:
  if (e.window.event == SDL_WINDOWEVENT_RESIZED ||
      e.window.event == SDL_WINDOWEVENT_SIZE_CHANGED) {
    resized = true;
  }
  break;*/
      default:
        break;
      }
    }

    // MEASURE TIME START HERE
    // auto startTime = high_resolution_clock::now();
    //  main spot stuff is drawn
    // auto stopTime = high_resolution_clock::now();
    // auto duration = duration_cast<microseconds>(stopTime - startTime);
    // double ms = duration.count() * 0.001;  // convert to milliseconds
    // double fps = 1000 / ms;
    /*std::cout << "render() duration: " << ms << " milliseconds (" << fps
              << " FPS | thread id: " << std::this_thread::get_id() << ").
       \n";*/

    // Update the surface
    SDL_UpdateWindowSurface(win_);

    // std::this_thread::sleep_for(20ms);
    //  std::cout << "End of frame. \n";
  }
}

void engine::cleanup() {
  // destroy window
  SDL_DestroyWindow(win_);

  // Quit SDL
  SDL_Quit();
}

void engine::drawPixel(int xPos, int yPos, const color &c) {
  if (xPos < 0 || xPos >= width_ || yPos < 0 || yPos >= height_) {
    throw std::runtime_error("Trying to draw pixel outside of window bounds. ");
  }

  // TODO: check color for out of bounds, or make better data structure
  // Shitty SDL3 line needed
  const SDL_PixelFormatDetails *formatDetails =
      SDL_GetPixelFormatDetails(surf_->format);
  Uint32 color = SDL_MapRGB(formatDetails, nullptr, c.r, c.g, c.b);

  // Get the pixels
  Uint32 *pixels = (Uint32 *)surf_->pixels;
  // Set the pixel
  pixels[surf_->w * yPos + xPos] = color;
}

void engine::clear(const color &c) {
  for (int y = 0; y < height_; y++) {
    for (int x = 0; x < width_; x++) {
      drawPixel(x, y, c);
    }
  }
}

void engine::testDraw() {
  std::cout << "Testing draw pixel function\n";

  color c(15, 24, 176);
  int x = 0;
  int y = 0;
  drawPixel(x, y, c);
  clear(c);
}
