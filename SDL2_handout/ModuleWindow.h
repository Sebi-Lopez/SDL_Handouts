#ifndef __ModuleWindow_H__
#define __ModuleWindow_H__

// TODO 1: Create the declaration of ModuleWindow class

struct SDL_Window;


class ModuleWindow : public Module {

public:
	SDL_Window *window;


	bool Init();
	bool CleanUp();
};


#endif // __ModuleWindow_H__