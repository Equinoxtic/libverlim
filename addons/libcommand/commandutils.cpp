#include "commandutils.h"
#include "command.h"
#include<iostream>

void c_command_s(
	std::vector<std::string> commandlist_names, 
	std::vector<std::string> commandlist_descriptions,
	int mod_nl
) {
	for (size_t i = 0; i < commandlist_names.size(); ++i) {
		std::cout << create_command(
			commandlist_names[i],
			commandlist_descriptions[i]
		);
		if ((i%mod_nl) == 0) std::cout << "\n";
	}
}

void push_command_list(std::vector<std::string> commandlist, int mod_nl) {
	for (size_t i = 0; i < commandlist.size(); ++i) {
		std::cout << commandlist[i];
		if ((i%mod_nl) == 0) std::cout << "\n";
	}
}