#ifndef VERSION_H_
#define VERSION_H_

#include<string>
#include "../fs/file.h"
#include "../fs/fileutils.h"

inline static std::string get_lib_version()
{
	std::string ret_s;
	if (lvfs::file_exists("libversion.txt"))
		ret_s = lvfs::read_file("libversion.txt");
	else
		ret_s = "NO FILE.";
	return ret_s;
}

#endif // VERSION_H_
