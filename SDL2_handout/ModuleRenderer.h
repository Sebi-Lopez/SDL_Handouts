#ifndef __ModuleRenderer_H__
#define __ModuleRenderer_H__

struct SDL_Renderer;
struct SDL_Window; 

class ModuleRenderer : public Module {

public:
	SDL_Renderer* renderer;

	bool Init();
	update_status Update(); 
	bool CleanUp();
};


#endif // __ModuleRenderer_H__