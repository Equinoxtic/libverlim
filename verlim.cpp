#include "stringutils.h"
#include "thread.h"
#include "fs/fileutils.h"
#include "fs/file.h"
#include "sys/limsys.h"
#include "sys/limbuiltin.h"
#include "limio/limstdio.h"
#include "limio/limioutils.h"
#include "logger.h"
#include "version.h"
#include<iostream>
#include<string>

void demo_loader()
{
	screenclear();
	log_message("Running LibVerlim Demo!");
	std::string current_os = get_platform();
	std::string demo_title = wrap_str("Running LibVerlim Demo", "-----< ", " >-----")
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
