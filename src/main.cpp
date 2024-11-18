#include <cstdlib>
#include <iostream>

#include "engine.h"

int main() {
  try {
    std::cout << "HELLO WORLT. \n";
    engine eng;
    eng.run();
  } catch (const std::exception &e) {
    std::cerr << e.what() << std::endl;
    return EXIT_FAILURE;
  }
  return EXIT_SUCCESS;
}
