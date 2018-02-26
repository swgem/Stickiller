#include "inc\Game\MenuManager.hpp"

Game::MenuManager::MenuManager()
{

}

Game::MenuManager::~MenuManager()
{

}

void Game::MenuManager::manage()
{

}

void Game::MenuManager::setDisplayManager(Display::DisplayManager &dm)
{
	m_dm = &dm;
}

void Game::MenuManager::setGameManager(GameManager &gm)
{
	m_gm = &gm;
}
