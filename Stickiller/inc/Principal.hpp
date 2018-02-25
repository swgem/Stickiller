#pragma once

#include "..\inc\Display\DisplayManager.hpp"
#include "..\inc\Game\GameTask.hpp"

class Principal
{
private:
	Display::DisplayManager m_dm;
	Game::GameTask m_gt;

public:
	Principal();
	int execute();
};
