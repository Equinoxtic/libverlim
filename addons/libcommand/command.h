#ifndef COMMAND_H_
#define COMMAND_H_

#include<string>

typedef struct Command {
	std::string data;
} Command;

std::string create_command(std::string name, std::string description);
void set_command(Command *cmdptr, std::string name, std::string description);
void put_command(Command *cmd);

#endif // COMMAND_H_