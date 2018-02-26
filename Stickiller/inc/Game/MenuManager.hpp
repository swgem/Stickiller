#pragma once

#include "..\Display\DisplayManager.hpp"
#include "..\Game\GameManager.hpp"

namespace Game
{
	enum class MenuOption
	{
		PLAY,
		OPTIONS,
		RECORDS,
		ABOUT
	};

	class MenuManager
	{
	private:
		Display::DisplayManager *m_dm;
		GameManager *m_gm;
		MenuOption m_selectedOption;

	public:
		MenuManager();
		~MenuManager();

		void manage(InputKey input);
		void setDisplayManager(Display::DisplayManager &dm);
		void setGameManager(GameManager &gm);
	};
}
