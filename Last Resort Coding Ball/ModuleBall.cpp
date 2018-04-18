#include "ModuleBall.h"
#include "Application.h"
#include "ModulePlayer.h"
#include "ModuleBackground.h"
#include "ModuleTextures.h"
#include "ModuleInput.h"
#include "ModuleRender.h"

ModuleBall::ModuleBall()
{
	current_animation = &E;

	E.PushBack({ 0, 0, 22, 16 });
	E.PushBack({ 22, 0, 22, 16 });
	E.PushBack({ 44, 0, 22, 16 });
	E.PushBack({ 66, 0, 22, 16 });
	E.PushBack({ 88, 0, 22, 16 });
	E.PushBack({ 110, 0, 22, 16 });
	E.PushBack({ 132, 0, 22, 16 });
	E.PushBack({ 154, 0, 22, 16 });
	E.speed = 0.3f; 
	E.loop = true; 

	NEE.PushBack({ 176, 0, 22, 17 });
	NEE.PushBack({ 198, 0, 22, 17 });
	NEE.PushBack({ 220, 0, 22, 17 });
	NEE.PushBack({ 0, 17, 22, 17 });
	NEE.PushBack({ 22, 17, 22, 17 });
	NEE.PushBack({ 44, 17, 22, 17 });
	NEE.PushBack({ 66, 17, 22, 17 });
	NEE.PushBack({ 88, 17, 22, 17 });
	NEE.speed = 0.3f; 
	NEE.loop = true; 

	NE.PushBack({ 110, 17, 21, 21 });
	NE.PushBack({ 131, 17, 21, 21 });
	NE.PushBack({ 152, 17, 21, 21 });
	NE.PushBack({ 173, 17, 21, 21 });
	NE.PushBack({ 194, 17, 21, 21 });
	NE.PushBack({ 215, 17, 21, 21 });
	NE.PushBack({ 0, 38, 21, 21 });
	NE.PushBack({ 21, 38, 21, 21 });
	NE.speed = 0.3f;
	NE.loop = true; 

	NNE.PushBack({ 42, 38, 17, 23 }); 
	NNE.PushBack({ 59, 38, 17, 23 });
	NNE.PushBack({ 76, 38, 17, 23 });
	NNE.PushBack({ 93, 38, 17, 23 });
	NNE.PushBack({ 110, 38, 17, 23 });
	NNE.PushBack({ 127, 38, 17, 23 });
	NNE.PushBack({ 144, 38, 17, 23 });
	NNE.PushBack({ 161, 38, 17, 23 });
	NNE.speed = 0.3f;
	NNE.loop = true;

	N.PushBack({ 178, 38, 16, 22 });	
	N.PushBack({ 194, 38, 16, 22 });
	N.PushBack({ 210, 38, 16, 22 });
	N.PushBack({ 226, 38, 16, 22 });
	N.PushBack({ 0, 61, 16, 22 });
	N.PushBack({ 16, 61, 16, 22 });
	N.PushBack({ 32, 61, 16, 22 });
	N.PushBack({ 48, 61, 16, 22 });
	N.loop = true; 
	N.speed = 0.3f;

	NNW.PushBack({ 64, 61, 17, 23 });
	NNW.PushBack({ 81, 61, 17, 23 });
	NNW.PushBack({ 98, 61, 17, 23 });
	NNW.PushBack({ 115, 61, 17, 23 });
	NNW.PushBack({ 132, 61, 17, 23 });
	NNW.PushBack({ 149, 61, 17, 23 });
	NNW.PushBack({ 166, 61, 17, 23 });
	NNW.PushBack({ 183, 61, 17, 23 });
	NNW.loop = true;
	NNW.speed = 0.3f;

	NW.PushBack({ 205, 61, 21, 21 });
	NW.PushBack({ 221, 61, 21, 21 });
	NW.PushBack({ 0, 84, 21, 21 });
	NW.PushBack({ 21, 61, 21, 21 });
	NW.PushBack({ 42, 61, 21, 21 });
	NW.PushBack({ 63, 61, 21, 21 });
	NW.PushBack({ 84, 61, 21, 21 });
	NW.PushBack({ 105, 61, 21, 21 });
	NW.loop = true;
	NW.speed = 0.3f;

	NWW.PushBack({ 126, 61, 22, 17 });
	NWW.PushBack({ 148, 61, 22, 17 });
	NWW.PushBack({ 170, 61, 22, 17 });
	NWW.PushBack({ 192, 61, 22, 17 });
	NWW.PushBack({ 214, 61, 22, 17 });
	NWW.PushBack({ 0, 105, 22, 17 });
	NWW.PushBack({ 22, 105, 22, 17 });
	NWW.PushBack({ 44, 105, 22, 17 });
	NWW.loop = true;
	NWW.speed = 0.3f;

	W.PushBack({ 66, 105, 22, 16 });
	W.PushBack({ 88, 105, 22, 16 });
	W.PushBack({ 110, 105, 22, 16 });
	W.PushBack({ 132, 105, 22, 16 });
	W.PushBack({ 154, 105, 22, 16 });
	W.PushBack({ 176, 105, 22, 16 });
	W.PushBack({ 198, 105, 22, 16 });
	W.PushBack({ 220, 105, 22, 16 });
	W.loop = true;
	W.speed = 0.3f;

	SWW.PushBack({ 0, 122, 22, 17 });
	SWW.PushBack({ 22, 122, 22, 17 });
	SWW.PushBack({ 44, 122, 22, 17 });
	SWW.PushBack({ 66, 122, 22, 17 });
	SWW.PushBack({ 88, 122, 22, 17 });
	SWW.PushBack({ 110, 122, 22, 17 });
	SWW.PushBack({ 132, 122, 22, 17 });
	SWW.PushBack({ 154, 122, 22, 17 });
	SWW.loop = true; 
	SWW.speed = 0.3f; 

	SW.PushBack({ 176, 122, 21, 21 });
	SW.PushBack({ 197, 122, 21, 21 });
	SW.PushBack({ 218, 122, 21, 21 });
	SW.PushBack({ 0, 143, 21, 21 });
	SW.PushBack({ 21, 143, 21, 21 });
	SW.PushBack({ 42, 143, 21, 21 });
	SW.PushBack({ 63, 143, 21, 21 });
	SW.PushBack({ 84, 143, 21, 21 });
	SW.loop = true;
	SWW.speed = 0.3f; 

	SSW.PushBack({ 105, 143, 17, 23 });
	SSW.PushBack({ 122, 143, 17, 23 });
	SSW.PushBack({ 139, 143, 17, 23 });
	SSW.PushBack({ 156, 143, 17, 23 });
	SSW.PushBack({ 173, 143, 17, 23 });
	SSW.PushBack({ 190, 143, 17, 23 });
	SSW.PushBack({ 207, 143, 17, 23 });
	SSW.PushBack({ 224, 143, 17, 23 });
	SSW.loop = true;
	SSW.speed = 0.3f; 

	S.PushBack({ 0, 166, 16, 22 });
	S.PushBack({ 16, 166, 16, 22 });
	S.PushBack({ 32, 166, 16, 22 });
	S.PushBack({ 48, 166, 16, 22 });
	S.PushBack({ 64, 166, 16, 22 });
	S.PushBack({ 80, 166, 16, 22 });
	S.PushBack({ 96, 166, 16, 22 });
	S.PushBack({ 112, 166, 16, 22 });
	S.loop = true;
	S.speed = 0.3f;

	SSE.PushBack({ 128, 166, 17,23 });
	SSE.PushBack({ 145, 166, 17,23 });
	SSE.PushBack({ 162, 166, 17,23 });
	SSE.PushBack({ 179, 166, 17,23 });
	SSE.PushBack({ 196, 166, 17,23 });
	SSE.PushBack({ 213, 166, 17,23 });
	SSE.PushBack({ 230, 166, 17,23 });
	SSE.PushBack({ 0, 189, 17,23 });
	SSE.loop = true;
	S.speed = 0.3f;

	SE.PushBack({ 17, 189, 21, 21 });
	SE.PushBack({ 38, 189, 21, 21 });
	SE.PushBack({ 59, 189, 21, 21 });
	SE.PushBack({ 80, 189, 21, 21 });
	SE.PushBack({ 101, 189, 21, 21 });
	SE.PushBack({ 122, 189, 21, 21 });
	SE.PushBack({ 143, 189, 21, 21 });
	SE.PushBack({ 164, 189, 21, 21 });
	SE.loop = true;
	SE.speed = 0.3f;

	SEE.PushBack({ 185, 189, 22, 17 });
	SEE.PushBack({ 207, 189, 22, 17 });
	SEE.PushBack({ 229, 189, 22, 17 });
	SEE.PushBack({ 0, 212, 22, 17 });
	SEE.PushBack({ 22, 212, 22, 17 });
	SEE.PushBack({ 44, 212, 22, 17 });
	SEE.PushBack({ 66, 212, 22, 17 });
	SEE.PushBack({ 88, 212, 22, 17 });
	SE.loop = true;
	SE.speed = 0.3f;

}

bool ModuleBall::Start()
{
	texture = App->textures->Load("assets/sprites/blue_ball_axis.png");

	ball_position.x = App->player->position.x;
	ball_position.y = App->player->position.y;

	return true; 
}


update_status ModuleBall::Update()
{
	switch (App->player->player_direction)
	{
	case PLAYER_DIRECTION::GOING_UP:
		current_animation = &S;
		if (!ball_locked) {
			ball_position.x = App->player->position.x + 10;
			ball_position.y = App->player->position.y + 10;
		}
		break;
	case PLAYER_DIRECTION::GOING_LEFT:
		current_animation = &E;
		if (!ball_locked) {
			ball_position.x = App->player->position.x + CHARACTER_WIDTH + 10;
			ball_position.y = App->player->position.y - CHARACTER_HEIGHT - CHARACTER_HEIGHT / 2;
		}
		break;
	case PLAYER_DIRECTION::GOING_RIGHT:
		current_animation = &W;
		if (!ball_locked) {
			ball_position.x = App->player->position.x - CHARACTER_WIDTH;
			ball_position.y = App->player->position.y - CHARACTER_HEIGHT - CHARACTER_HEIGHT / 2;
		}
		break;
	case PLAYER_DIRECTION::GOING_DOWN:
		current_animation = &N;
		if (!ball_locked) {
			ball_position.x = App->player->position.x + 10;
			ball_position.y = App->player->position.y - 45;
		}
		break;
	}
	SDL_Rect r = current_animation->GetCurrentFrame();

	App->render->Blit(texture, ball_position.x, ball_position.y, &r); 
	return update_status::UPDATE_CONTINUE;
}

bool ModuleBall::CleanUp()
{
	App->textures->Unload(texture); 
	return true;
}
