#include "command.h"
#include "../../lib/stringutils.h"
#include "../../lib/vectorutils.h"
#include<iostream>
#include<vector>

std::string create_command(std::string name, std::string description)
{
	std::string fname;
	if (!str_empty(name)) {
		std::vector<std::string> vs = {
			wrap_str(name, "[", "]"), ": ", quote_str(description)
		};
		fname = ret_vector_s(vs);
	}
	return fname;
}

void set_command(Command *cmdptr, std::string name, std::string description) {
	cmdptr->data = create_command(name, description);
}

void put_command(Command *cmd) {
	std::cout << cmd->data;
}
