#ifndef COMMANDUTILS_H_
#define COMMANDUTILS_H_

#include<string>
#include<vector>

/// Converts a string vector to commands and outputs it
void c_command_s(
	std::vector<std::string> commandlist_names,
	std::vector<std::string> commandlist_descriptions
);
void push_command_list(std::vector<std::string> commandlist);

#endif // COMMANDUTILS_H_