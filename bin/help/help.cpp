#include<iostream>
#include<string>
#include<vector>
#include "../../addons/libcommand/commandutils.h"

void list_commands()
{
	std::vector<std::string> list = {
		"help",
		"clear",
		"exit",
		"gitcpp",
		"res-install"
	};
	std::vector<std::string> descriptions = {
		"Display information and help for the LibVerlim console.",
		"Clear the screen.",
		"Exits out of the console.",
		"Git Checkout, Pull, and Push.",
		"Install LibVerlim resource files. (For customization and etc.)"
	};
	std::cout << "\n";
	c_command_s(list, descriptions);
	std::cout << "\n";
}

int main(int argc, char *argv[]) { list_commands(); return 0; }
