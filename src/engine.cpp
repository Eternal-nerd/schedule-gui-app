#include "engine.h"

#include <iostream>
#include <stdexcept>
#include <thread>

#include <SDL3/SDL.h>

engine::engine() { canv = new canvas(); }

engine::~engine() { delete canv; }

void engine::run() {
  // testing:
  canv->testDraw();

  // Main loop flag
  bool quit = false;
  bool resized = false;

  // Event handler
  SDL_Event e;

  // While application is running
  while (!quit) {
    // Handle events on queue
    while (SDL_PollEvent(&e) != 0) {
      // std::cout << "" << '\n';
      switch (e.type) {
      case SDL_QUIT: // User requests quit
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

    /*if (resized) {
      std::cout << "Resizing...\n";
      resized = false;
      canv->updateSize();
      cam->updateSize(canv->screen_width, canv->screen_height);
      // SDL_GetWindowSize(canv->getWindowPtr(), &canv->screen_width,
      //                   &canv->screen_height);
    }*/

    // MEASURE TIME START HERE

    // Clear screen (fill with black)
    // SDL_FillRect(_screenSurface, nullptr,
    //             SDL_MapRGB(_screenSurface->format, 0x00, 0x00, 0x00));

    // auto startTime = high_resolution_clock::now();
    //  main spot stuff is drawn
    // auto stopTime = high_resolution_clock::now();
    // auto duration = duration_cast<microseconds>(stopTime - startTime);
    // double ms = duration.count() * 0.001;  // convert to milliseconds
    // double fps = 1000 / ms;
    /*std::cout << "render() duration: " << ms << " milliseconds (" << fps
              << " FPS | thread id: " << std::this_thread::get_id() << ").
       \n";
        */
    // Update the surface
    SDL_UpdateWindowSurface(canv->getWindowPtr());

    // std::this_thread::sleep_for(20ms);
    //  std::cout << "End of frame. \n";
  }
}
