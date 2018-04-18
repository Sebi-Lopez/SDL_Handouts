#ifndef _MODULEBALL_H__
#define _MODULEBALL_H__

#include "Module.h"
#include "Globals.h"
#include "p2Point.h"
#include "Animation.h"


#define LATERAL_MARGIN 50
#define VERTICAL_MARGIN 50

struct SDL_Texture; 

enum BALL_POSITION {

	BALL_POSITION_N = 1,
	BALL_POSITION_NNE,
	BALL_POSITION_NE,
	BALL_POSITION_NEE,
	BALL_POSITION_E,
	BALL_POSITION_SEE,
	BALL_POSITION_SE,
	BALL_POSITION_SSE,
	BALL_POSITION_S,
	BALL_POSITION_SSW,
	BALL_POSITION_SW,
	BALL_POSITION_SWW,
	BALL_POSITION_W,
	BALL_POSITION_NWW,
	BALL_POSITION_NW,
	BALL_POSITION_NNW,

};

enum BALL_AIMING {

	BALL_AIMING_N = 1,
	BALL_AIMING_NE,
	BALL_AIMING_E,
	BALL_AIMING_SE,
	BALL_AIMING_S,
	BALL_AIMING_SW,
	BALL_AIMING_W,
	BALL_AIMING_NW,

};

class ModuleBall : public Module {
	
public:

	ModuleBall();
	//~ModuleBall();

	bool Start();
	update_status Update();
	bool CleanUp(); 
	//bool CleanUp();


	Animation N;
	Animation NNE;
	Animation NE;
	Animation NEE;
	Animation E;
	Animation SEE;
	Animation SE;
	Animation SSE; 
	Animation S;
	Animation SSW;
	Animation SW;
	Animation SWW;
	Animation W;
	Animation NWW;
	Animation NW;
	Animation NNW; 

	Animation* current_animation;

public:

	bool ball_locked = false; 

	iPoint ball_position;
	BALL_POSITION _ball; 
	BALL_AIMING ball_aiming; 
	SDL_Texture* texture; 
};


#endif //_MODULEBALL_H__