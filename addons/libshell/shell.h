#ifndef SHELL_H_
#define SHELL_H_

#include<string>
#include<iostream>

namespace lshell {
	typedef struct {
		std::string data;
	} Shell;

	std::string create_shell(std::string usr, std::string env);
	void set_shell(Shell* sh, std::string usr, std::string env);
	void put_shell(Shell* sh);

	/// Uses the text files in `shell/res`
	///
	/// Allows for customization if properly used.
	void f_shell(std::string type);
}

#endif // SHELL_H_