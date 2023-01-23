#include "./file.h"

void write_to_file(std::string _path, std::string c)
{
	std::ofstream f(_path, std::ios::app);
	if (f.is_open()) {
		f << c << "\n"; f.close();
	} else {
		std::cout << "Unable to write to file: " << _path;
	}
}

std::string read_file(std::string _path)
{
	std::string ln, ret_f;
	std::ifstream f(_path);
	if (f.is_open()) {
		while (std::getline(f, ln))
			ret_f = ln;
		f.close();
	} else {
		std::cout << "Unable to read file: " << _path;
	}
	return ret_f;
}

void file_out(std::string _path)
{
	std::cout << read_file(_path);
}

