#include "verlim.h"

void demo_loader()
{
	screenclear();
	log_message("Running LibVerlim Demo!");
	std::string current_os = get_platform();
	std::string demo_title = wrap_str("Running LibVerlim Demo", "-----< ", " >-----")
						   + "\n" + get_lib_info()
						   + "\n> Current OS: " + current_os
						   + "\n> LibVerlim version: " + get_lib_version()
						   + "\n> Press Enter to Continue. Enjoy!";
	typer(demo_title, demo_title.length());
	thread_pause();
	screenclear();
}

int main(int argc, char **argv)
{
	demo_loader();
	log_message("LibVerlim Console launched!");
	screenclear();
}
