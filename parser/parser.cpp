#include "parser.h"
#include "../lib/stringutils.h"
#include "../lib/vectorutils.h"
#include "../lib/sys/limsys.h"
#include "../lib/sys/limbuiltin.h"
#include "../fs/fileutils.h"
#include<iostream>
#include<vector>

void output_input_details(std::string input_str) {
	std::cout << "\nRan command: " + input_str << "\nParsing command: " + input_str;
}

void parse_command(std::string cinput)
{
	if (!str_empty(cinput))
	{
		std::string r;
		std::vector<std::string> vs = {
			#ifndef WIN32
			"bin/", cinput
			#else
			"bin\\", cinput
			#endif
		};
		r = ret_vector_s(vs);
		if (lvfs::file_exists(r + ".exe")) {
			#ifdef _WIN32
			lsys::sysexec("pwsh -Command ./" + r);
			#else
			lsys::sysexec("./" + r);
			#endif
		} else {
			// BUILT-IN
			if (compare_str(cinput, "clear")) {
				lsys::screenclear();
			} else if (compare_str(cinput, "exit")) {
				std::cout << "\0";
			} else if (compare_str(cinput, "res-install")) {
				lsys::sysexec("git clone https://github.com/Equinoxtic/res.git");
			} else {
				lsys::sysexec(cinput);
			}
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
