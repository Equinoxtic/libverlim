#include "memstat.h"
#include <string.h>
#include <iostream>

#ifdef _WIN32
#include "../../lib/winmem.h"
#else
#include "../../lib/mem.h"
#endif

void display_virtmem(char *fmt[]) {
	for (int i = 0; i < 3; ++i) {
		if (strcmp(fmt[i], ":t") == 0)			std::cout << get_total_virtmem();
		else if (strcmp(fmt[i], ":u") == 0)		std::cout << get_used_virtmem();
		else if (strcmp(fmt[i], ":c") == 0)		std::cout << get_curproc_virtmem();
	} 
}

void display_physmem(char *fmt[]) {
	for (int i = 0; i < 3; ++i) {
		if (strcmp(fmt[i], ":t") == 0)			std::cout << get_total_physmem();
		else if (strcmp(fmt[i], ":u") == 0)		std::cout << get_used_physmem();
		else if (strcmp(fmt[i], ":c") == 0)		std::cout << get_curproc_physmem();
	}
}
