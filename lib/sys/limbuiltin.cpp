#include "./limbuiltin.h"

void syspause()
{
	#ifdef _WIN32
		system("pause");
	#else
		system("read");
	#endif
}

void screenclear()
{
	#ifdef _WIN32
		system("cls");
	#else
		system("clear");
	#endif
}

void sysexit()
{
	system("exit");
}
