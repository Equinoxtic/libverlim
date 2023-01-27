#include "stringutils.h"
#include "thread.h"
#include "fs/fileutils.h"
#include "fs/file.h"
#include "sys/limsys.h"
#include "sys/limbuiltin.h"
#include "logger.h"
#include<iostream>
#include<string>

void demo_loader()
{
	log_message("Running LibVerlim Demo!");
	
	std::string current_os = get_platform();

	std::cout << "\n" << wrap_str("Running LibVerlim Demo", "-----<", ">-----") << "\n"
			  << "Current OS: " << current_os << "\n"
			  << "Press Enter to Continue. Enjoy!";

	thread_pause();

	screenclear();
}

int main(int argc, char **argv)
{
	demo_loader();
	log_message("LibVerlim Console launched!");
	thread_pause();
	screenclear();
}
