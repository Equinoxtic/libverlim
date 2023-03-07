#include "./fileutils.h"
#include "./file.h"
#include "../lib/sys/limsys.h"

namespace lvfs {
	void create_file(std::string f)
	{
		#ifdef _WIN32
			lsys::sysexec("type nul > " + f);
		#else
			lsys::sysexec("touch " + f);
		#endif
	}

	void clear_file(std::string _path)
	{
		lvfs::override_file(_path, "");
	}

	bool file_exists(const std::string &_path)
	{
		std::ifstream f(_path.c_str()); return f.good();
	}
}

