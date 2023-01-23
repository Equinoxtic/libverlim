#include "./fileutils.h"
#include "./file.h"
#include "sys/sysamix.h"

void create_file(std::string f)
{
	#ifdef _WIN32
		syscmd("type nul > " + f);
	#else
		syscmd("touch " + f);
	#endif
}

void clear_file(std::string _path)
{
	write_to_file(_path, "");
}

bool file_exists(const std::string &_path)
{
	std::ifstream f(_path.c_str()); return f.good();
}

