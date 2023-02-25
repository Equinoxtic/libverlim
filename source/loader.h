#ifndef LOADER_H_
#define LOADER_H_

#include "includes.h"

inline static void demo_loader()
{
	screenclear();
	
	log_message("Running LibVerlim Demo!");

	std::string current_os = get_platform();

	std::string demo_title = wrap_str("Running LibVerlim Demo", "-----< ", " >-----");
	demo_title.append("\n" + get_lib_info());
	demo_title.append("\n> Current OS: " + current_os);
	demo_title.append("\n> LibVerlim version: " + get_lib_version());
	demo_title.append("> Press Enter to Continue. Enjoy!");

	typer(demo_title, demo_title.length(), 7);

	thread_pause();
}

#endif // LOADER_H_