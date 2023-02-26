#ifndef _WIN32

#ifndef MEM_H_
#define MEM_H_

#include "sys/types.h"
#include "sys/sysinfo.h"
#include "sys/times.h"
#include "stdlib.h"
#include "stdio.h"
#include "string.h"

static inline long long get_total_virtmem() {
	struct sysinfo meminfo;
	sysinfo (&meminfo);
	long long totalvirtmem = meminfo.totalram;
	totalvirtmem += meminfo.totalswap;
	totalvirtmem *= meminfo.mem_unit;
	return totalvirtmem;
}

static inline long long get_used_virtmem() {
	struct sysinfo meminfo;
	sysinfo (&meminfo);
	long long usedvirtmem = meminfo.totalram;
	usedvirtmem += meminfo.totalswap - meminfo.freeswap;
	usedvirtmem *= meminfo.mem_unit;
	return usedvirtmem;
}

int parse_line(char *line) {
	int i = strlen(line);
	const char *p = line;
	while (*p < '0' || *p > '9') p++;
	line[i - 3] = '\0';
	i = atoi(p);
	return i;
}

static inline int get_curproc_virtmem() {
	FILE *f = fopen("/proc/self/status", "r");
	int res = -1;
	char line[128];
	while (fgets(line, 128, f) != NULL) {
		if (strncmp(line, "VmSize:", 7) == 0) {
			res = parse_line(line);
			break;
		}
	}
	fclose(f);
	return res;
}

static inline long long get_total_physmem() {
	struct sysinfo meminfo;
	sysinfo (&meminfo);
	long long totalphysmem = meminfo.totalram;
	totalphysmem *= meminfo.mem_unit;
	return totalphysmem;
}

static inline long long get_used_physmem() {
	struct sysinfo meminfo;
	sysinfo (&meminfo);
	long long usedvirtmem = meminfo.totalram;
	usedvirtmem += meminfo.totalram - meminfo.freeram;
	return usedvirtmem;
}

static inline int get_curproc_physmem() {
	FILE *f = fopen("/proc/self/status", "r");
	int res = -1;
	char line[128];
	while (fgets(line, 128, f) != NULL) {
		if (strncmp(line, "VmRSS:", 6) == 0) {
			res = parse_line(line);
			break;
		}
	}
	fclose(file);
	return res;
}

#endif // MEM_H_

#endif