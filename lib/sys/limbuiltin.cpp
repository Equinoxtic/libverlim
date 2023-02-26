#include "./limbuiltin.h"
#include <iostream>

void syspause() {
	#ifdef _WIN32
		system("pause");
	#else
		system("read");
	#endif
}

void syspauseexit() {
	std::cout << "Press any key to continue...";
	getchar();
	exit(0);
}

void screenclear() {
	#ifdef _WIN32
		system("cls");
	#else
		system("clear");
	#endif
}

void sysshowinfo() {
	#ifdef _WIN32
		system("systeminfo");
	#else
		system("uname");
	#endif
}

void sysexit() {
	exit(0);
}
