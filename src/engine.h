#pragma once

#include "canvas.h"

class engine {
public:
	engine();
	~engine();

	void run();
	
private:
	canvas* canv;
};
