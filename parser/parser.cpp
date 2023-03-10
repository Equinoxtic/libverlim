#include "parser.h"
#include "../lib/stringutils.h"
#include "../lib/vectorutils.h"
#include "../lib/sys/limsys.h"
#include "../lib/sys/limbuiltin.h"
#include "../fs/fileutils.h"
#include<iostream>
#include<vector>
#include "bincmds.h"

void output_input_details(std::string input_str) {
	std::cout << "\nRan command: " + input_str << "\nParsing command: " + input_str;
}

void _run_exec(std::string c_cmd) {
	#ifdef _WIN32
	lsys::sysexec("pwsh -Command ./" + c_cmd);
	#else
	lsys::sysexec("./" + c_cmd);
	#endif
}

void _cmp_input(std::string in) {
	// BUILT-IN
	if (compare_str(in, "clear")) {
		lsys::screenclear();
	} else if (compare_str(in, "exit")) {
		std::cout << "\0";
	} else if (compare_str(in, "res-install")) {
		lsys::sysexec("git clone https://github.com/Equinoxtic/res.git");
	} else { lsys::sysexec(in); }
}

void parse_command(std::string cinput)
{
	if (!str_empty(cinput))
	{
		std::string r;
		std::string bin_pref;

		#ifdef _WIN32
			bin_pref = "bin\\";
		#else
			bin_pref = "bin/";
		#endif
		std::vector<std::string> vs = { bin_pref, cinput };

		r = ret_vector_s(vs);

		std::string nr;
		for (size_t i = 0; i < LIST_CMDS.size(); ++i) {
			if (find_str(cinput, LIST_CMDS[i])) {
				std::string true_path = bin_pref + LIST_CMDS[i] + ".exe";
				if (lvfs::file_exists(true_path)) {
					nr = true_path; break;
				} else {
					nr = cinput;
				}
			}
		}

		if (lvfs::file_exists(nr)) {
			_run_exec(r);
		} else {
			_cmp_input(cinput);
		}
	}
}

void parse_input(std::string input, bool silent)
{
	if (!str_empty(input)) {
		if (!silent) output_input_details(input);
		parse_command(input);
	}
}
