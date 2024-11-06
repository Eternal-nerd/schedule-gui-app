#include <cstdlib>
#include <iostream>
#include <string>

#include "window.h"

int main() {
  try {
		std::cout << "HELLO WORLT. \n";
		window win(800, 600);
		std::string s;
		std::cin >> s;
 	} catch (const std::exception& e) {
    	std::cerr << e.what() << std::endl;
    	return EXIT_FAILURE;
	}
  return EXIT_SUCCESS;
}
