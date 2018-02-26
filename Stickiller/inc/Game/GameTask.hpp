#pragma once

#include "..\Task.hpp"
#include "..\Display\DisplayManager.hpp"
#include "..\Game\GameManager.hpp"

namespace Game
{
	enum class InputKey
	{
		NONE,
		KEY_DOWN,
		KEY_UP,
		KEY_LEFT,
		KEY_RIGHT
	};

	class GameTask : public Task
	{
	private:
		const double UPDATE_FREQUENCY = 20;

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
