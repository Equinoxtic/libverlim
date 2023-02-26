#ifdef _WIN32

#ifndef WINMEM_H_
#define WINMEM_H_

#include <Windows.h>
#include <processthreadsapi.h>
#include <sysinfoapi.h>
#include <Psapi.h>

static inline DWORDLONG get_total_virtmem() {
	MEMORYSTATUSEX meminfo;
	meminfo.dwLength = sizeof(MEMORYSTATUSEX);
	GlobalMemoryStatusEx(&meminfo);
	DWORDLONG totalvirtmem = meminfo.ullTotalPageFile;
	return totalvirtmem;
}

static inline DWORDLONG get_used_virtmem() {
	MEMORYSTATUSEX meminfo;
	meminfo.dwLength = sizeof(MEMORYSTATUSEX);
	GlobalMemoryStatusEx(&meminfo);
	DWORDLONG usedvirtmem = meminfo.ullTotalPageFile - meminfo.ullAvailPageFile;
	return usedvirtmem;
}

static inline SIZE_T get_curproc_virtmem() {
	PROCESS_MEMORY_COUNTERS_EX pmc;
	GetProcessMemoryInfo(GetCurrentProcess(), (PROCESS_MEMORY_COUNTERS*)&pmc, sizeof(pmc));
	SIZE_T curvirtmem = pmc.PrivateUsage;
	return curvirtmem;
}

static inline DWORDLONG get_total_physmem() {
	MEMORYSTATUSEX meminfo;
	meminfo.dwLength = sizeof(MEMORYSTATUSEX);
	GlobalMemoryStatusEx(&meminfo);
	DWORDLONG totalphysmem = meminfo.ullTotalPhys;
	return totalphysmem;
}

static inline DWORDLONG get_used_physmem() {
	MEMORYSTATUSEX meminfo;
	meminfo.dwLength = sizeof(MEMORYSTATUSEX);
	GlobalMemoryStatusEx(&meminfo);
	DWORDLONG usedphysmem = meminfo.ullTotalPhys - meminfo.ullAvailPhys;
	return usedphysmem;
}

static inline SIZE_T get_curproc_physmem() {
	PROCESS_MEMORY_COUNTERS_EX pmc;
	GetProcessMemoryInfo(GetCurrentProcess(), (PROCESS_MEMORY_COUNTERS*)&pmc, sizeof(pmc));
	SIZE_T curphysmem = pmc.WorkingSetSize;
	return curphysmem;
}

#endif // WINMEM_H_

#endif