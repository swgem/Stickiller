#include "..\..\inc\Game\GameManager.hpp"

Game::GameManager::GameManager()
{
}

Game::GameManager::~GameManager()
{
}

void Game::GameManager::setGameMode(GameMode mode)
{
	m_mode = mode;
}

Game::GameMode Game::GameManager::getGameMode()
{
	return m_mode;
}
