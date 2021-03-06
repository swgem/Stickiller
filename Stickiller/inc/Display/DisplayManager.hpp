#pragma once

namespace Display
{
	enum class GameMode
	{
		MENU,
		RECORDS,
		OPTIONS,
		ABOUT,
		PHASE1
	};

	class DisplayManager
	{
	private:
		GameMode m_mode;

	public:
		DisplayManager();
		void setGameMode(GameMode mode);
	};
}
