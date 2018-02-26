#include "..\..\inc\Game\MenuManager.hpp"

Game::MenuOption& operator++(Game::MenuOption& m, int)
{
	switch (m)
	{
		case Game::MenuOption::PLAY:
			m = Game::MenuOption::ABOUT;
			break;
		case Game::MenuOption::OPTIONS:
			m = Game::MenuOption::PLAY;
			break;
		case Game::MenuOption::RECORDS:
			m = Game::MenuOption::OPTIONS;
			break;
		case Game::MenuOption::ABOUT:
			m = Game::MenuOption::RECORDS;
			break;
		default:
			break;
	}

	return m;
}

Game::MenuOption& operator--(Game::MenuOption& m, int)
{
	switch (m)
	{
	case Game::MenuOption::PLAY:
		m = Game::MenuOption::OPTIONS;
		break;
	case Game::MenuOption::OPTIONS:
		m = Game::MenuOption::RECORDS;
		break;
	case Game::MenuOption::RECORDS:
		m = Game::MenuOption::ABOUT;
		break;
	case Game::MenuOption::ABOUT:
		m = Game::MenuOption::PLAY;
		break;
	default:
		break;
	}

	return m;
}

Game::MenuManager::MenuManager() : m_dm{ nullptr },
								   m_gm{ nullptr },
								   m_selectedOption{ MenuOption::PLAY }
{

}

Game::MenuManager::~MenuManager()
{

}

void Game::MenuManager::manage(InputKey input)
{
	switch (input) {
		case InputKey::KEY_UP:
			m_selectedOption++;
			break;
		case InputKey::KEY_DOWN:
			m_selectedOption--;
			break;
	}
}

void Game::MenuManager::setDisplayManager(Display::DisplayManager &dm)
{
	m_dm = &dm;
}

void Game::MenuManager::setGameManager(GameManager &gm)
{
	m_gm = &gm;
}
