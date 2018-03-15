#ifndef __APPLICATION_H__
#define __APPLICATION_H__

#include "Globals.h"
#include "Module.h"
#include "Dummy.h"

#define NUM_MODULES 1

class Application
{
public:

	Module* modules[NUM_MODULES];

public:

	Application()
	{
		modules[0] = new ModuleDummy();
		// TODO 7: Create your new module "DummyESC"
		// it should check if player it ESC key use kbhit()
		// http://www.cprogramming.com/fod/kbhit.html
	}

	~Application()
	{
		delete[] modules;
	}

	// INIT all modules
	bool Init() {
		bool ret = true; 
		for (int i = 0; i < NUM_MODULES; ++i){
			ret = modules[i]->Init();
			if (ret == false)
				i = NUM_MODULES;	
		}
		
		// TODO 5: Make sure that if Init() / PreUpdate/Update/PostUpdate/CleanUP return
		// an exit code App exits correctly.
		return ret; 
	}
	
	
	// UPDATE all modules

	// TODO 4: Add PreUpdate and PostUpdate calls
	// TODO 2: Make sure all modules receive its update
	update_status Update() {
		update_status state = UPDATE_CONTINUE;

		for (int i = 0; i < NUM_MODULES && state == UPDATE_CONTINUE; ++i) 
			state = modules[i]->PreUpdate();
		


		for (int i = 0; i < NUM_MODULES && state == UPDATE_CONTINUE; ++i)
			state = modules[i]->Update();


		for (int i = 0; i < NUM_MODULES && state == UPDATE_CONTINUE; ++i)
			state = modules[i]->PostUpdate();

		return state; 
	}



	// EXIT Update 
	// TODO 3: Make sure all modules have a chance to cleanup
	bool CleanUp()	
	{
		bool ret = true; 
		for (int i = NUM_MODULES; i > 0; --i) 		{
			ret = modules[i]->CleanUp();
			if (ret == false) i = 0;
		}

		return ret;
	}

};

#endif // __APPLICATION_H__