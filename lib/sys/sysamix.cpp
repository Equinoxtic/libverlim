#include "./sysamix.h"

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

void syscmd(std::string cmd)
{
	std::string cmdstr; cmdstr = cmd;
	const char* fcmd = cmdstr.c_str();
	system(fcmd);
}
