#ifndef LOADER_H_
#define LOADER_H_

#include "includes.h"

inline static void demo_loader()
{
	lsys::screenclear();
	
	logger::log_message("Running LibVerlim Demo!");

	std::string current_os = lsys::get_platform();

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
		lstd::typer(demo_vs[i], demo_vs[i].length(), 5);
	}

	int input = getch();
	if (key_pressed_str(input, "q") || key_pressed_str(input, "Q")) {
		lsys::screenclear(); lsys::sysexit();
	} else { 
		std::cout << "\0";
	}
}

#endif // LOADER_H_