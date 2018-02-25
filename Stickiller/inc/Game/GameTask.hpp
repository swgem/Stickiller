#pragma once

#include "..\Task.hpp"
#include "..\Display\DisplayManager.hpp"

namespace Game
{
	class GameTask : public Task
	{
	private:
		Display::DisplayManager* m_dm;

		void run();

	public:
		GameTask();
		void setDisplayManager(Display::DisplayManager& dm);
	};
}
