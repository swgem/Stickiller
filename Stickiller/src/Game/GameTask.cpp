#include "..\..\inc\Game\GameTask.hpp"

void Game::GameTask::run()
{
	initInput();

	while (true)
	{
		ALLEGRO_EVENT ev;
		al_wait_for_event(m_eventQueue, &ev);
		
		if (ev.type == ALLEGRO_EVENT_TIMER)
		{
			switch (m_gm->getGameMode())
			{
				case GameMode::MENU:
					
					break;
				default:
					break;
			}
		}
		else if (ev.type == ALLEGRO_EVENT_KEY_DOWN)
		{
			m_lastKey = verifyKey(ev.keyboard.keycode);
		}
		else if (ev.type == ALLEGRO_EVENT_KEY_UP)
		{
			m_lastKey = InputKey::NONE;
		}
	}
}

void Game::GameTask::initInput()
{
	al_install_keyboard();

	m_timer = al_create_timer(1.0 / UPDATE_FREQUENCY);
	m_eventQueue = al_create_event_queue();

	al_register_event_source(m_eventQueue, al_get_timer_event_source(m_timer));
	al_register_event_source(m_eventQueue, al_get_keyboard_event_source());
}

Game::InputKey Game::GameTask::verifyKey(int input)
{
	InputKey key;
	switch (input)
	{
		case ALLEGRO_KEY_UP:
			key = InputKey::KEY_UP;
			break;
		case ALLEGRO_KEY_DOWN:
			key = InputKey::KEY_DOWN;
			break;
		case ALLEGRO_KEY_LEFT:
			key = InputKey::KEY_LEFT;
			break;
		case ALLEGRO_KEY_RIGHT:
			key = InputKey::KEY_RIGHT;
			break;
		default:
			key = InputKey::NONE;
			break;
	}

	return key;
}

Game::GameTask::GameTask() : m_dm{ nullptr },
							 m_eventQueue{ nullptr },
							 m_timer{ nullptr }
{
	
}

void Game::GameTask::setDisplayManager(Display::DisplayManager& dm)
{
	m_dm = &dm;
}

void Game::GameTask::setGameManager(GameManager & gm)
{
	m_gm = &gm;
}
