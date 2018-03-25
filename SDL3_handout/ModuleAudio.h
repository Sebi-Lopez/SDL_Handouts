#ifndef __MODULE_AUDIO_H__
#define __MODULE_AUDIO_H__

#include "Module.h"
#include "Globals.h"


class ModuleAudio : public Module {

	bool Init();
	update_status Update();
	update_status PostUpdate();
	bool CleanUp();

};

#endif //__MODULE_AUDO_H__

