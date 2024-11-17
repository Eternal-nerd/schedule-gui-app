#include "canvas.h"

#include <iostream>
#include <stdexcept>

canvas::canvas() {
	// FIXME Add window resizing
	init(800, 600);
}

canvas::~canvas() {
	cleanup();
}

SDL_Window* canvas::getWindowPtr() {
	return win;
}

void canvas::init(int w, int h) {
	width = w;
	height = h;

	// init SDL
	if (SDL_Init(SDL_INIT_VIDEO) < 0) {
		throw std::runtime_error("Failed to initialize SDL. ");
	}

	// create SDL window
	win = SDL_CreateWindow("Schedule App", SDL_WINDOWPOS_UNDEFINED,
                             SDL_WINDOWPOS_UNDEFINED, w, 
							 h, SDL_WINDOW_SHOWN);
	if (!win) {
		throw std::runtime_error("Failed to create SDL window. ");
	}

	surf = SDL_GetWindowSurface(win);
}

void canvas::cleanup() {
	// destroy window
	SDL_DestroyWindow(win);

	// Quit SDL
	SDL_Quit();
}

void canvas::drawPixel(int xPos, int yPos, const color& c) {
	if (xPos < 0 || xPos >= width || yPos < 0 || yPos >= height) {
		throw std::runtime_error("Trying to draw pixel outside of window bounds. ");
	}
	
	// TODO: check color for out of bounds, or make better data structure
	Uint32 color = SDL_MapRGB(surf->format, c.r, c.g, c.b);

	// Get the pixels
    Uint32* pixels = (Uint32*)surf->pixels;
    // Set the pixel
    pixels[yPos * surf->w + xPos] = color;
}

void canvas::clear(const color& c) {
  for (int y = 0; y < height; y++) {
    for (int x = 0; x < width; x++) {
      drawPixel(x, y, c);
    }
  }
}

void canvas::testDraw() {
	std::cout << "Testing draw pixel function\n";

	color c(15, 24, 176);
	int x = 0;
	int y = 0;
	drawPixel(x, y, c);
	clear(c);
}
