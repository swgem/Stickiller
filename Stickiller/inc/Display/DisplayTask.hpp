#pragma once

#include <allegro5\allegro.h>

#include "..\Task.hpp"

namespace Display {
	class DisplayTask : public Task
	{
	private:
		const int SCREEN_HEIGHT{ 480 };
		const int SCREEN_WIDTH{ 640 };
		const double FPS{ 60 };

		ALLEGRO_DISPLAY *m_display;
		ALLEGRO_EVENT_QUEUE *m_refresherEvent;
		ALLEGRO_TIMER *m_refresherTimer;

		void run();
		void initDisplay();
		void initRefresher();
		void refreshScreen();

	public:
		DisplayTask();
		~DisplayTask();
	};
}
