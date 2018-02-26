#pragma once

#include "..\inc\Display\DisplayManager.hpp"
#include "..\inc\Display\DisplayTask.hpp"
#include "..\inc\Game\GameTask.hpp"

class Principal
{
private:
	Display::DisplayManager m_dm;
	Display::DisplayTask m_dt;
	Game::GameManager m_gm;
	Game::GameTask m_gt;

public:
	Principal();
	int execute();
};
