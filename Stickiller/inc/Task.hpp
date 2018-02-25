#pragma once

#include <allegro5\allegro.h>

class Task
{
private:
	ALLEGRO_THREAD * m_thread;
	virtual void run();

	static void *s_taskRoutine(ALLEGRO_THREAD *thread, void *args);

public:
	Task();
	~Task();
	int start();
	void waitExecution();
};
