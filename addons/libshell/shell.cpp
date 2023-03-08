#include "./shell.h"
#include "./shellenv.h"
#include "../../lib/stringutils.h"
#include "../../lib/vectorutils.h"
#include "../../fs/file.h"
#include "../../fs/fileutils.h"
#include<vector>

namespace lshell {
	std::string create_shell(std::string usr, std::string env)
	{
		std::string f_shell_s;
		if (!str_empty(usr) && !str_empty(env)) {
			std::vector<std::string> vs = {
				"[", usr, "@", env, "] $"	
			};
			f_shell_s = ret_vector_s(vs);
		} else {
			f_shell_s = "[user@env] $";
		}

		return f_shell_s + " ";
	}

	void set_shell(Shell *sh, std::string usr, std::string env) {
		sh->data = create_shell(usr, env);
	}

	void put_shell(Shell *sh) {
		std::cout << sh->data;
	}

	void f_shell(std::string type)
	{
		std::string s;

		std::string defusrf = lvfs::read_file("res/shell/user.txt");
		std::string defenvf = lvfs::read_file("res/shell/env.txt");

		if (!str_empty(type)) {
			if (compare_str(type, "default")) {
				s = create_shell(defusrf, defenvf);
			} else if (compare_str(type, "custom")) {
				s = lvfs::read_file("res/shell/customshell.txt");
			}
		} else {
			s = create_shell(defusrf, defenvf);
		}

		std::cout << s << " ";
	}
}
