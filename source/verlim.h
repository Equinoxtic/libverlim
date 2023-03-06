#ifndef VERLIM_H_
#define VERLIM_H_

#include "includes.h"
#include "loader.h"

inline static void setuplib()
{
	std::vector<std::string> compile_bin = {
		"help", "exit", "clear", "gitcpp"
	};
	for (size_t i = 0; i < compile_bin.size(); ++i) {
		std::string path = "bin/" + compile_bin[i] + "/";
		sysexec("make -C " + path);
	}
}

inline static void initialize(bool load)
{
	std::string in;

	if (load) {
		setuplib();
		clear_logfile();
		demo_loader();
		log_message("LibVerlim console launched!");
		screenclear();
	}

	f_shell("custom");
	readstr(in);
	if (!str_empty(in)) parse_input(in);
	
	if (!compare_str(in, "exit")) {
		initialize(false);
	} else {
		clear_logfile(); screenclear();
	}
}

#endif // VERLIM_H_