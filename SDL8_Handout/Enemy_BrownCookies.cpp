#include "Application.h"
#include "Enemy_RedBird.h"
#include "ModuleCollision.h"
#include "Enemy_BrownCookies.h"

Enemy_BrownCookies::Enemy_BrownCookies(int x, int y) : Enemy(x, y)
{
	fly.PushBack({ 5,72,21,22 });

	animation = &fly;
	original_position.x = x; 
	original_position.y = y; 

	collider = App->collision->AddCollider({ 0, 0, 24, 24 }, COLLIDER_TYPE::COLLIDER_ENEMY, (Module*)App->enemies);

	path.PushBack({ 0.5f, 0.5f }, 50, &fly);
	path.PushBack({ 0.5f, -0.5f }, 50, &fly);
}


void Enemy_BrownCookies::Move()
{
	position = original_position + path.GetCurrentPosition(); 
}
