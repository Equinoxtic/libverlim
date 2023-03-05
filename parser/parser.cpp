#include "parser.h"
#include "../lib/stringutils.h"
#include "../lib/vectorutils.h"
#include "../lib/sys/limsys.h"
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
		if (file_exists(r + ".exe")) {
			#ifdef _WIN32
			sysexec("pwsh -Command ./" + r);
			#else
			sysexec("./" + r);
			#endif
		} else {
			sysexec(cinput);
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
