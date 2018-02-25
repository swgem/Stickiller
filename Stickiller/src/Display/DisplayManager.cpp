#include "..\..\inc\Display\DisplayManager.hpp"

Display::DisplayManager::DisplayManager()
{
	
}

int Display::DisplayManager::startDisplay()
{
	return m_dt.start();
}
