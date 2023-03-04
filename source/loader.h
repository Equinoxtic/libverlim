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

	std::string demo_vars;
	demo_vars.append("\n" + get_lib_info());
	demo_vars.append("\n> Current OS: " + current_os);
	demo_vars.append("\n> LibVerlim version: " + get_lib_version());
	demo_vars.append("> Press Enter to Continue. Enjoy!");

	typer(demo_vars, demo_vars.length(), 7);

	thread_pause();
}

#endif // LOADER_H_