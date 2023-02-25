#include "./fileutils.h"
#include "./file.h"
#include "../lib/sys/limsys.h"

void create_file(std::string f)
{
	#ifdef _WIN32
		sysexec("type nul > " + f);
	#else
		sysexec("touch " + f);
	#endif
}

void clear_file(std::string _path)
{
	override_file(_path, "");
}

bool file_exists(const std::string &_path)
{
	std::ifstream f(_path.c_str()); return f.good();
}

