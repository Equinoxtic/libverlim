#include "./shell.h"
#include "./shellenv.h"
#include "../../lib/stringutils.h"
#include "../../fs/file.h"
#include "../../fs/fileutils.h"

std::string create_shell(std::string usr, std::string env)
{
	std::string f_shell_s;

	if (!str_empty(usr) && !str_empty(env)) {
		f_shell_s = usr;
		f_shell_s.append("@" + env);
		f_shell_s = wrap_str(f_shell_s, "[", "]");
		f_shell_s.append(" $ ");
	} else {
		f_shell_s = "[user@env] $ ";
	}

	return f_shell_s;
}

std::string format_shell(std::string usr, std::string env, std::string env_symbol, std::string ch)
{
	std::string f_shell_s;

	if (!str_empty(usr) && !str_empty(env) && !str_empty(env_symbol)) {
		f_shell_s = usr;
		f_shell_s.append(env_symbol); f_shell_s.append(env);
		f_shell_s = wrap_str(f_shell_s, "[", "]");
		if (!str_empty(ch))
			f_shell_s.append(ch);
		else
			f_shell_s.append(" ");
	} else {
		f_shell_s = "[user@env] $ ";
	}

	return f_shell_s;
}

void put_shell(std::string usr, std::string env, bool formatted, std::string env_symbol, std::string ch) {
	std::cout << ((!formatted) ? create_shell(usr, env) : format_shell(usr, env, env_symbol, ch));
}

void f_shell(std::string type)
{
	std::string s;
	std::string defusrf = read_file("res/shell/usr.txt");
	std::string defenvf = read_file("res/shell/env.txt");
	if (!str_empty(type)) {
		if (compare_str(type, "default")) {
			s = create_shell(defusrf, ((!str_empty(defenvf) && file_exists(defenvf)) ? defenvf : auto_env()));
		} else if (compare_str(type, "custom")) {
			s = read_file("res/shell/customshell.txt");
		}
	} else {
		s = create_shell(defusrf, ((!str_empty(defenvf) && file_exists(defenvf)) ? defenvf : auto_env()));
	}
	std::cout << s;
}
