#include <cstdlib>
#include <iostream>

#include <SDL2/SDL.h>

int main() {
  try {
	  std::cout << "HELLO WORLT. \n";
  } catch (const std::exception& e) {
    std::cerr << e.what() << std::endl;
    return EXIT_FAILURE;
  }
  return EXIT_SUCCESS;
}
