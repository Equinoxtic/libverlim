#include "./fileutils.h"
#include "./file.h"
#include "../lib/sys/limsys.h"
#include "../lib/stringutils.h"
#include<sys/stat.h>
#include<sys/types.h>

namespace lvfs {
	void create_file(std::string f) {
		#ifdef _WIN32
			lsys::sysexec("type nul > " + f);
		#else
			lsys::sysexec("touch " + f);
		#endif
	}

	void clear_file(std::string _path) {
		lvfs::override_file(_path, "");
	}

	bool file_exists(const std::string &_path) {
		std::ifstream f(_path.c_str()); return f.good();
	}

	int path_exists(std::string _path) {
		struct stat info;
		int res = 0;
		const char* c_path;
		if (!str_empty(_path)) c_path = _path.c_str();
		if (stat(c_path, &info) != 0)
			res = 0;
		else if (info.st_mode & S_IFDIR)
			res = 1;
		else
			res = 0;
		return res;
	}
}
