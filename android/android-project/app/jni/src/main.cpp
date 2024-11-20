// ONE-FILE Implementation of an SDL application to be run on Android.

#include <cstdlib>
#include <thread>

#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>

struct color {
  color(int red, int green, int blue) {
		r = red;
		g = green;
		b = blue;
	}
	int r;
  int g;
  int b;
};

int main(int argc, char *argv[]) {
  (void)argc;
  (void)argv;
	if (!SDL_Init(SDL_INIT_EVENTS | SDL_INIT_VIDEO)) {
  	SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "SDL_Init failed (%s)", SDL_GetError());
    return 1;
  }

	SDL_Window *win_ = nullptr;
  SDL_Surface *surf_ = nullptr;

	/*win_ = SDL_CreateWindow("Schedule App", width_, height_, 0);
  if (!win_) {
    //throw std::runtime_error("Failed to create SDL window. ");
  }
	
  if (!SDL_SetWindowResizable(win_, true)) {
    //throw std::runtime_error("Failed to make window resizable. ");
  }
  
	surf_ = SDL_GetWindowSurface(win_);
	
  bool quit = false;

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
      default:
        break;
			}
    }
  }

    // Update the surface
    //SDL_UpdateWindowSurface(win_);*/

  if (!SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_INFORMATION, "Hello World", "!! Your SDL project successfully runs on Android !!", NULL)) {
    SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "SDL_ShowSimpleMessageBox failed (%s)", SDL_GetError());
    return 1;
  }

	// destroy window
  //SDL_DestroyWindow(win_);

  SDL_Quit();
  return 0;
}
