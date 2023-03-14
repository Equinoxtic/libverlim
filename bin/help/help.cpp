#include<iostream>
#include<string>
#include<cstring>
#include<cstdlib>
#include<vector>
#include "../../addons/libcommand/commandutils.h"

void list_commands(bool verbose = true)
{
	std::vector<std::string> list = {
		"help",
		"version",
		"clear",
		"exit",
		"gitcpp",
		"resconfig",
		"res-install"
	};
	
	std::vector<std::string> descriptions = {
		"Display information and help for the LibVerlim console commands.",
		"Show the current version of LibVerlim.",
		"Clear the screen.",
		"Exits out of the console.",
		"Git Checkout, Pull, and Push.",
		"\"Resource Configuration\", used for configuring the verlim console resources.",
		"Install LibVerlim resource files. (For customization and etc.)"
	};

	std::cout << "\n";
	if (verbose) {
		c_command_s(list, descriptions);
		std::cout << "\n";
	} else {
		for (size_t i = 0; i < list.size(); ++i)
			std::cout << list[i] << " ";
		std::cout << "\n\n";
	}
}

int main(int argc, char *argv[]) {
	for (int i = 0; i < argc; ++i) {
		if (strcmp(argv[i], "-v") == 0) {
			list_commands();
		} else if (strcmp(argv[i], "-s") == 0) {
			list_commands(false);
		} else if (strcmp(argv[i], "") == 0) {
			list_commands();
		}
	}
	return 0;
}
