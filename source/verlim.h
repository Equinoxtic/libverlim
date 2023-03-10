#ifndef VERLIM_H_
#define VERLIM_H_

#include "includes.h"
#include "loader.h"
#include "../parser/bincmds.h"

inline static void setuplib()
{
	lsys::screenclear();

	for (size_t i = 0; i < LIST_CMDS.size(); ++i) {
		std::string path = "bin/" + LIST_CMDS[i] + "/";
		if (lvfs::file_exists(path + "Makefile")) {
			lsys::sysexec("make -s -C " + path);
		} else {
			std::cout << LIST_CMDS[i] << ": cannot be compiled. Does not exist.\n";
		}
	}
}

inline static void initialize(bool load)
{
	std::string in;

	if (load) {
		logger::clear_logfile();
		demo_loader();
		logger::log_message("LibVerlim console launched!");
		lsys::screenclear();
	}

	lshell::f_shell("custom");
	lstd::reads(in);
	if (!str_empty(in)) parse_input(in);

	if (compare_str(in, "exit")) {
		logger::clear_logfile(); lsys::screenclear();
	} else {
		initialize(false);
	}
}

#endif // VERLIM_H_