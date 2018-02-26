#include "..\..\inc\Display\DisplayTask.hpp"

void Display::DisplayTask::run()
{
	initDisplay();
	initRefresher();

	int counter = 0;

	while (true)
	{
		ALLEGRO_EVENT ev;
		al_wait_for_event(m_refresherEvent, &ev);

		if (ev.type == ALLEGRO_EVENT_TIMER)
		{
			counter += 1;
			if (counter > 255)
			{
				counter = 0;
			}
			al_clear_to_color(al_map_rgb(counter, counter, counter));

			refreshScreen();
		}
	}
}

void Display::DisplayTask::initDisplay()
{
	m_display = al_create_display(SCREEN_WIDTH, SCREEN_HEIGHT);

	al_clear_to_color(al_map_rgb(0, 0, 0));

	al_flip_display();
}

void Display::DisplayTask::initRefresher()
{
	m_refresherEvent = al_create_event_queue();
	m_refresherTimer = al_create_timer(1.0 / FPS);

	al_register_event_source(m_refresherEvent, al_get_timer_event_source(m_refresherTimer));
	al_start_timer(m_refresherTimer);
}

void Display::DisplayTask::refreshScreen()
{
	al_flip_display();
}

Display::DisplayTask::DisplayTask() : m_display{ nullptr },
									  m_refresherEvent{ nullptr },
								      m_refresherTimer{ nullptr }
{

}

Display::DisplayTask::~DisplayTask()
{
	al_destroy_display(m_display);
	al_destroy_event_queue(m_refresherEvent);
	al_destroy_timer(m_refresherTimer);
}

void Display::DisplayTask::setDisplayManager(DisplayManager &dm)
{
	m_dm = &dm;
}
