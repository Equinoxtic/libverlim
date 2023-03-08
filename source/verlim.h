#ifndef VERLIM_H_
#define VERLIM_H_

#include "includes.h"
#include "loader.h"

inline static void setuplib()
{
	std::vector<std::string> compile_bin = {
		"help", 
		"gitcpp"
		// "exit", 
		// "clear", 
	};

	for (size_t i = 0; i < compile_bin.size(); ++i) {
		std::string path = "bin/" + compile_bin[i] + "/";
		if (lvfs::file_exists(path + "Makefile")) {
			lsys::sysexec("make -s -C " + path);
		} else {
			std::cout << compile_bin[i] << ": cannot be compiled. Does not exist.\n";
		}
	}
}

inline static void initialize(bool load)
{
	std::string in;

	if (load) {
		setuplib();
		logger::clear_logfile();
		demo_loader();
		logger::log_message("LibVerlim console launched!");
		lsys::screenclear();
	}

	lshell::f_shell("custom");
	lstd::reads(in);
	if (!str_empty(in)) parse_input(in);

	if (!compare_str(in, "exit")) {
		initialize(false);
	} else {
		logger::clear_logfile(); lsys::screenclear();
	}
}

#endif // VERLIM_H_