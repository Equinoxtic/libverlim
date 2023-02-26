#include "memstat.h"
#include "../../lib/stringutils.h"
#include <string.h>
#include <iostream>
#include<stdio.h>

#ifdef _WIN32
#include "../../lib/winmem.h"
#else
#include "../../lib/mem.h"
#endif

void display_virtmem(std::string fmt) {
	if (compare_str(fmt, "t")) {
		fprintf(stdout, "%llu", get_total_virtmem());
	} else if (compare_str(fmt, "u")) {
		fprintf(stdout, "%llu", get_used_virtmem());
	} else if (compare_str(fmt, "c")) {
		#ifdef _WIN32
		fprintf(stdout, "%zu", get_curproc_virtmem());
		#else
		fprintf(stdout, "%d", get_curproc_virtmem);
		#endif
	}
}

void display_ram(std::string fmt) {
	if (compare_str(fmt, "t")) {
		fprintf(stdout, "%llu", get_total_physmem());
	} else if (compare_str(fmt, "u")) {
		fprintf(stdout, "%llu", get_used_physmem());
	} else if (compare_str(fmt, "c")) {
		#ifdef _WIN32
		fprintf(stdout, "%zu", get_curproc_physmem());
		#else
		fprintf(stdout, "%d", get_curproc_virtmem);
		#endif
	}
}
