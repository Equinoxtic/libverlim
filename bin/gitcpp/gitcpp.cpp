#include<iostream>
#include<string>
#include<vector>
#include "../../include/color.hpp"
#include "../../limstd/limio/limstdio.h"
#include "../../lib/stringutils.h"
#include "../../lib/vectorutils.h"
#include "../../lib/sys/limsys.h"

int main(int argc, char **argv)
{
	std::string check_branch_in;
	std::string base_branch_in;

	std::cout << dye::light_red("\nGitCPP") << dye::aqua(" (Checkout, Pull, Push)") << "\n";
	std::cout << dye::light_blue("\n[1]: Branch to checkout > "); lstd::reads(check_branch_in);
	std::cout << dye::light_yellow("[2]: Branch to pull > "); lstd::reads(base_branch_in);

	if (!str_empty(check_branch_in) && !str_empty(base_branch_in)) {
		std::string s_cmd;
		std::vector<std::string> vs_cmd = {
			"git checkout ", check_branch_in, " && git pull origin ", base_branch_in, " && git push"
		};
		s_cmd = ret_vector_s(vs_cmd);
		lsys::sysexec(s_cmd);
	}

	return 0;
}
