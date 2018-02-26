#pragma once

#include "..\Display\DisplayManager.hpp"
#include "..\Game\GameManager.hpp"

namespace Game
{
	class MenuManager
	{
	private:
		Display::DisplayManager *m_dm;
		GameManager *m_gm;

	public:
		MenuManager();
		~MenuManager();

		void manage();
		void setDisplayManager(Display::DisplayManager &dm);
		void setGameManager(GameManager &gm);
	};
}
