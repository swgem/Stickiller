#pragma once

#include "..\Display\DisplayTask.hpp"

namespace Display
{
	class DisplayManager
	{
	private:
		DisplayTask m_dt;

	public:
		DisplayManager();
		int startDisplay();
	};
}
