#ifndef FILEUTILS_H_
#define FILEUTILS_H_

#include<string>
#include<iostream>
#include<fstream>

namespace lvfs {
	void create_file(std::string f);
	void clear_file(std::string _path);
	bool file_exists(const std::string &_path);
}

#endif // FILEUTILS_H_
