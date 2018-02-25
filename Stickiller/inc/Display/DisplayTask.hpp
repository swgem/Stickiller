#pragma once

#include <allegro5\allegro.h>

#include "..\Task.hpp"

namespace Display {
	class DisplayTask : public Task
	{
	private:
		ALLEGRO_DISPLAY * display;

		void run();
		void initDisplay();

	public:
		DisplayTask();
	};
}
