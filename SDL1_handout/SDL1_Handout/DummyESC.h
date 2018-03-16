#ifndef _DUMMYESC_H__
#define _DUMMYESC_H__

#include "Module.h"
#include "Globals.h"
#include <conio.h>
#include <iostream>

using namespace std;

class ModuleDummyESC : public Module {

public:

	bool Init()
	{
		LOG("Dummy Init!");
		return true;
	}	
	
	update_status Update()
	{
		LOG("Dummy Update!");
		update_status state = UPDATE_CONTINUE; 
		if (_kbhit()) state = UPDATE_STOP;
		return state;
	}


	bool CleanUp()
	{
		LOG("Dummy CleanUp!");
		return true;
	}
};



#endif // _DUMMYESC_H___
