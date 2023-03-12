#include<iostream>
#include<sstream>
#include<vector>
#include<string>
#include "statehandler.hpp"
#include "../../lib/stringutils.h"
#include "../../addons/consoleui/optionbox.h"
#include "../../addons/consoleui/titleheader.h"
#include "../../addons/liboptions/option.h"
#include "../../addons/liboptions/optionutils.h"
#include "../../limstd/limio/limstdio.h"
#include "../../limstd/limio/limioutils.h"
#include "../../lib/sys/limbuiltin.h"

void _state_select() {
	OptionBox ob;
	set_formattedoptionbox(&ob, "Select Configuration", "input");
	TitleHeader th;
	set_header(&th, "Configuration");
	std::string s_in;

	std::vector<std::string> state_options = {
		"Loader",
		"Shell"
	};

	lsys::screenclear();

	put_header(&th); lstd::f_seq("newln", 2);

	push_options_list(state_options);

	lstd::f_seq("newln");

	put_optionbox(&ob);
	lstd::reads(s_in);
	if (!str_empty(s_in)) {
		switch(std::stoi(s_in)) {
			case 1: states::loader::create(); break;
			case 2: states::shell::create(); break;
			default: std::cout << "\nFailed Configuration. Try again.\n\n"; break;
		}
	}
}

int main(int argc, char **argv) {
	_state_select();
	return 0;
}