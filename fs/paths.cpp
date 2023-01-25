#include "./paths.h"
#include "stringutils.h"

std::string get_file(std::string f, std::string ext)
{
	std::string rf;
	if (!str_empty(f) && !str_empty(ext))
		rf = rf+"."+ext;
	return rf;
}

std::string get_log_file()
{
	return get_file("logs/log", "txt");
}

