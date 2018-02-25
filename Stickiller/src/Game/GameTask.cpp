#include "..\..\inc\Game\GameTask.hpp"

void Game::GameTask::run()
{
	while (true);
}

Game::GameTask::GameTask() : m_dm{ nullptr }
{

}

void Game::GameTask::setDisplayManager(Display::DisplayManager& dm)
{
	m_dm = &dm;
}
