#include "./file.h"

namespace lvfs {
	void write_to_file(std::string _path, std::string c, bool newline)
	{
		std::ofstream f(_path, std::ios::app);
		if (f.is_open()) {
			f << c << ((newline) ? "\n" : ""); f.close();
		} else {
			std::cout << "Unable to write to file: " << _path;
		}
	}

	void override_file(std::string _path, std::string c)
	{
		std::ofstream f(_path);
		if (f.is_open()) {
			f << c; f.close();
		} else {
			std::cout << "Unable to write to file: " << _path;
		}
	}

	std::string read_file(std::string _path)
	{
		std::string ret_f;
		std::ifstream f(_path);
		if (f.is_open()) {
			std::ostringstream ss;
			ss << f.rdbuf();
			ret_f = ss.str();
		} else {
			std::cout << "Unable to read file: " << _path;
		}
		f.close();
		return ret_f;
	}

	void file_out(std::string _path)
	{
		std::cout << read_file(_path);
	}
}
