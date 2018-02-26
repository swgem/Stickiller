#pragma once

namespace Game
{
	enum class InputKey
	{
		NONE,
		KEY_DOWN,
		KEY_UP,
		KEY_LEFT,
		KEY_RIGHT,
		KEY_ENTER
	};

	enum class GameMode
	{
		MENU,
		RECORDS,
		OPTIONS,
		ABOUT,
		PHASE1
	};

	class GameManager
	{
	private:
		GameMode m_mode;

	public:
		GameManager();
		~GameManager();

		void setGameMode(GameMode mode);
		GameMode getGameMode();
	};
}
