#pragma once

#include <SDL2/SDL.h>

class window {
	public:
		window(int w, int h);
		~window();

	private:
		int width;
		int height;
		SDL_Window* win = nullptr;
		SDL_Surface* surf = nullptr;

		void init(int w, int h);

		void cleanup();
};
