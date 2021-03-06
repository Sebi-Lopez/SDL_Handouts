#ifndef __ModulePlayer_H__
#define __ModulePlayer_H__

#include "Module.h"
#include "Animation.h"
#include "p2Point.h"

struct SDL_Texture;
struct Collider;

class ModulePlayer : public Module
{
public:
	ModulePlayer();
	~ModulePlayer();

	bool Start();
	update_status Update();
	bool CleanUp();
	void OnCollision(Collider* c1, Collider*c2);

public:

	bool test = false; 
	SDL_Texture* graphics = nullptr;
	Animation* current_animation = nullptr;
	Collider* player_collider = nullptr; 
	Animation idle;
	Animation up;
	Animation down;
	iPoint position;
};

#endif