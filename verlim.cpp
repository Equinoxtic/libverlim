#include "source/verlim.h"

int main(int argc, char **argv) {
	std::string f;

	setuplib();

	if (lvfs::file_exists("res/config/loader.txt"))
		f = lvfs::read_file("res/config/loader.txt");
	else
		f = "noskip";

	bool skip_t = true;

	if (compare_str(f, "noskip"))
		skip_t = true;
	else if (compare_str(f, "skip"))
		skip_t = false;
	else
		skip_t = true;

	initialize(skip_t);

	return 0;
}
