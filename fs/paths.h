#ifndef PATHS_H_
#define PATHS_H_

#include<string>

namespace lvfs {
	std::string get_file(std::string f, std::string ext);
	std::string get_log_file();
}

#endif // PATHS_H_
