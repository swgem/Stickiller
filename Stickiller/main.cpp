#include <allegro5\allegro.h>

#include "inc\Principal.hpp"

int main()
{
	int errorCode{ 0 };
	Principal p;

	errorCode = p.execute();

	return errorCode;
}
