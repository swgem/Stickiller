#include "..\inc\Task.hpp"

void Task::run()
{
	
}

void* Task::s_taskRoutine(ALLEGRO_THREAD *thread, void *args)
{
	auto task = static_cast<Task*>(args);

	if (task != nullptr)
	{
		task->run();
	}

	return nullptr;
}

Task::Task()
{

}

Task::~Task()
{
	al_destroy_thread(m_thread);
}

int Task::start()
{
	auto errorCode{ 0 };
	m_thread = al_create_thread(s_taskRoutine, static_cast<void*>(this));

	if (m_thread == nullptr)
	{
		errorCode = -1;
	}
	else
	{
		al_start_thread(m_thread);
	}

	return 0;
}

void Task::waitExecution()
{
	al_join_thread(m_thread, nullptr);
}
