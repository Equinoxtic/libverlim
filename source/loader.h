#ifndef LOADER_H_
#define LOADER_H_

#include "includes.h"

inline static void demo_loader()
{
	screenclear();
	
	log_message("Running LibVerlim Demo!");

	std::string current_os = get_platform();

	std::string demo_title = wrap_str("Running LibVerlim Demo", "-----< ", " >-----");
	
	std::cout << demo_title;

	std::vector<std::string> demo_vs = {
		"\n", get_lib_info(),
		"\n", create_seperator(), "\n",
		"\n> Current OS: ", current_os,
		"\n> LibVerlim version: " + get_lib_version(),
		"> Press Any Key to Continue. Enjoy!"
	};

	for (size_t i = 0; i < demo_vs.size(); ++i) {
		typer(demo_vs[i], demo_vs[i].length(), 5);
	}

	int input = getch();
	if (input == 113) {
		screenclear(); sysexit();
	} else { std::cout << "\0"; }
}

#endif // LOADER_H_