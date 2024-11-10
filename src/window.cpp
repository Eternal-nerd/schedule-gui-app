#include <stdexcept>

#include "window.h"

window::window() {
	// FIXME Add window resizing
	init(800, 600);
}

window::~window() {
	cleanup();
}

SDL_Window* window::getWindowPtr() {
	return win;
}

void window::init(int w, int h) {
  // init SDL
  if (SDL_Init(SDL_INIT_VIDEO) < 0) {
    throw std::runtime_error("Failed to initialize SDL. ");
  }

  // create window
  win = SDL_CreateWindow("Schedule App", SDL_WINDOWPOS_UNDEFINED,
                             SDL_WINDOWPOS_UNDEFINED, w, 
							 h, SDL_WINDOW_SHOWN);
  if (!win) {
    throw std::runtime_error("Failed to create SDL window. ");
  }

  // allow resizing
  // SDL_SetwindowResizable(_window, SDL_TRUE);

  // add event watch for resizing
  // SDL_AddEventWatch(

  // resizingEventWatcher, _window);

  // Get window surface
  surf = SDL_GetWindowSurface(win);

}

void window::cleanup() {
	// destroy window
	SDL_DestroyWindow(win);

	// Quit SDL
	SDL_Quit();
}

