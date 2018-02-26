#pragma once

#include "..\Task.hpp"
#include "..\Display\DisplayManager.hpp"
#include "..\Game\GameManager.hpp"

namespace Game
{
	class GameTask : public Task
	{
	private:
		const double UPDATE_FREQUENCY{ 20.0 };
		const double UPDATE_PERIOD{ 1000.0 * 1.0 / UPDATE_FREQUENCY };
		const double DEBOUNCE_PERIOD{ 150.0 };

		Display::DisplayManager *m_dm;
		GameManager *m_gm;

		ALLEGRO_EVENT_QUEUE *m_eventQueue;
		ALLEGRO_TIMER *m_timer;
		InputKey m_lastKey;
		
		void run();
		void initInput();
		InputKey verifyKey(int m_input);

	public:
		GameTask();
		void setDisplayManager(Display::DisplayManager& dm);
		void setGameManager(GameManager& gm);
	};
}
