#ifndef __ENEMY_BROWNCOOKIES_H__
#define __ENEMY_BROWNCOOKIES_H__

#include "Enemy.h"
#include "Path.h"

class Enemy_BrownCookies : public Enemy
{
private:
	float wave = -1.0f;
	bool going_up = true;
	iPoint original_position;
	Animation fly;
	Path path; 

public:

	Enemy_BrownCookies(int x, int y);

	void Move();
};

#endif // __ENEMY_BrownCookies_H__