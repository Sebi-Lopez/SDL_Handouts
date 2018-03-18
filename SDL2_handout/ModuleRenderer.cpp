#include "ModuleRenderer.h"
#include "ModuleWindow.h"
#include "Globals.h"
#include "Application.h"
#include "SDL\include\SDL.h"

bool ModuleRenderer::Init()
{
	bool ret = true; 
	SDL_Init(SDL_INIT_VIDEO);

	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_PRESENTVSYNC);
	if (!renderer) {
		LOG("There was an error creating the Renderer ----- SDL Error: ");
		SDL_GetError();
		ret = false;
	}

	return ret;
}

update_status ModuleRenderer::Update()
{
	SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
	SDL_RenderClear(renderer);
	SDL_RenderPresent(renderer);

	return UPDATE_CONTINUE;
}


bool ModuleRenderer::CleanUp()
{
	SDL_DestroyRenderer(renderer);
	return true; 
}