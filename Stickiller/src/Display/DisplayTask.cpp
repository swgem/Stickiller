#include "..\..\inc\Display\DisplayTask.hpp"

void Display::DisplayTask::run()
{
	initDisplay();
}

void Display::DisplayTask::initDisplay()
{
	display = al_create_display(640, 480);

	al_clear_to_color(al_map_rgb(128, 128, 128));

	al_flip_display();
}

Display::DisplayTask::DisplayTask()
{

}
