#ifndef VERSION_H_
#define VERSION_H_

#include<string>
#include "file.h"
#include "fileutils.h"

inline static std::string get_lib_version()
{
	std::string ret_s;
	if (file_exists("res/libversion.txt"))
		ret_s = read_file("res/libversion.txt");
	return ret_s;
}

#endif // VERSION_H_
