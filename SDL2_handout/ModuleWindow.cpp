#include "Globals.h"
#include "Application.h"
#include "ModuleWindow.h"
#include "SDL\include\SDL.h"


// TODO 2: Init the library and check for possible error
// using SDL_GetError()
bool ModuleWindow::Init()
{
	bool ret = true; 

	if (SDL_Init(SDL_INIT_VIDEO) != 0) {
		ret = false;
		LOG("Couldn't initialize SDL_VIDEO ------- SDL ERROR: %s");
	}
	
	window = SDL_CreateWindow("My game Window",
		SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
		SCREEN_WIDTH, SCREEN_HEIGHT, 
		FULLSCREEN);
	
	if (!window) {
		LOG("There was a problem creating the Window. ----- SDL Error: %s");
		ret = false; 
	}

	return ret;
}


bool ModuleWindow::CleanUp() {
	bool ret = true; 
	SDL_DestroyWindow(window);
	SDL_Quit();
	return ret; 
}
// TODO 3: pick the width and height and experiment with flags: borderless / fullscreen / resizable,
// then create the window and check for errors

// TODO 4: Finally create a screen surface and keep it as a public variable

// TODO 5: Fill with code CleanUp() method :)


