#ifndef SHELL_H_
#define SHELL_H_

#include<string>
#include<iostream>

std::string create_shell(std::string usr, std::string env);
std::string format_shell(
	std::string usr, std::string env,
	std::string env_symbol = "@", std::string ch = " $ ");
void put_shell(
	std::string usr, std::string env, bool formatted,
	std::string env_symbol = "@", std::string ch = " $ ");


/// Uses the text files in `shell/res`
///
/// Allows for customization if properly used.
void f_shell(std::string type);

#endif // SHELL_H_