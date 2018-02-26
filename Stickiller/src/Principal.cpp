#include "..\inc\Principal.hpp"

#include <allegro5/allegro5.h>

Principal::Principal()
{

}

int Principal::execute()
{
	auto errorCode{ 0 };

	// Tenta inicializar Allegro
	if (!al_init())
	{
		errorCode = -1;
	}
	else
	{
		// Tenta inicializar rotina de Display
		m_dt.setDisplayManager(m_dm);
		errorCode = m_dt.start();
		
		if (errorCode != -1)
		{
			// Tenta inicializar rotina principal de jogo
			m_gt.setGameManager(m_gm);
			m_gt.setDisplayManager(m_dm);
			errorCode = m_gt.start();
		}
	}

	// Caso tenha inicializado as tarefas corretamente
	if (errorCode != -1)
	{
		m_gt.waitExecution();
	}

	return errorCode;
}
