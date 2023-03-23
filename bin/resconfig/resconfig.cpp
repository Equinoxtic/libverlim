#include<iostream>
#include<sstream>
#include<vector>
#include<string>
#include<cmath>
#include "statehandler.hpp"
#include "../../lib/stringutils.h"
#include "../../addons/consoleui/optionbox.h"
#include "../../addons/consoleui/titleheader.h"
#include "../../addons/liboptions/option.h"
#include "../../addons/liboptions/optionutils.h"
#include "../../limstd/limio/limstdio.h"
#include "../../limstd/limio/limioutils.h"
#include "../../lib/sys/limbuiltin.h"
#include "../../fs/fileutils.h"

void _state_select() {
	OptionBox ob;
	ui::set_formattedoptionbox(&ob, 0, 0, "Select Configuration", "input");
	TitleHeader th;
	ui::set_header(&th, 0, 0, "Configuration");
	std::string s_in;

	std::vector<std::string> state_options = {
		"Loader",
		"Shell"
	};

	lsys::screenclear();

	ui::put_header(&th); lstd::f_seq("newln", 2);

	push_options_list(state_options);

	lstd::f_seq("newln");

	ui::put_optionbox(&ob);
	lstd::reads(s_in);
	if (!str_empty(s_in)) {
		if (!nan(s_in.c_str())) {
			switch(std::stoi(s_in)) {
				case 1: states::loader::create(); break;
				case 2: states::shell::create(); break;
				default: std::cout << "\nFailed Configuration. Try again.\n\n"; break;
			}
		} else {
			std::cout << "\nExiting...\n\n";
		}
	}
}

int main(int argc, char **argv) {
	if (lvfs::path_exists("res/") == 0) {
		_state_select();
	} else {
		std::cout << "\n\"res\" directory is unavailable.\n> To download the resource files, clone this repository: [https://github.com/Equinoxtic/res] in your current directory.\n\n";
	}
	return 0;
}