#pragma once

#include "window.h"

class engine {
public:
	engine();
	~engine();

	void run();

private:
	window* win;

};
