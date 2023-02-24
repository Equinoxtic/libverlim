#include "./limsys.h"
#include "../stringutils.h"
#include<iostream>

std::string get_platform()
{
	std::string cur;
	#ifdef _WIN32
		cur = "Windows";
	#else
		cur = "Unix";
	#endif
	return cur;
}

void sysexec(std::string cmd)
{
	std::string cmdstr; cmdstr = cmd;
	const char *fcmd;
	if (!str_empty(cmd))
		fcmd = cmdstr.c_str();
	else
		std::cout << "\nCommand cannot be empty or null.\n";
	system(fcmd);
}
