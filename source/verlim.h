#ifndef VERLIM_H_
#define VERLIM_H_

#include "includes.h"
#include "loader.h"
#include "../parser/bincmds.h"

static void _cmpl_s(std::string s, bool compiled = false) {
	if (!compiled) {
		std::cout << "@make // [Compiling]: " << wrap_str("~/" + s + "...", "< ", " >") << "\n";
	} else {
		std::cout << "@make // [Compiled]: " << quote_str(s) << "\n";
	}
}

inline static void setuplib()
{
	lsys::screenclear();

	for (size_t i = 0; i < LIST_CMDS.size(); ++i) {
		std::string path = "bin/" + LIST_CMDS[i] + "/";
		if (lvfs::file_exists(path + "/Makefile")) {
			_cmpl_s(path);
			lsys::sysexec("make -s -C " + path);
			_cmpl_s(LIST_CMDS[i], true);
			ms_sleep(150);
		} else {
			std::cout << wrap_str(LIST_CMDS[i], "[", "]") << ": cannot be compiled.\nMakefile or FILE Does not exist.\n";
		}
	}

	lsys::screenclear();
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