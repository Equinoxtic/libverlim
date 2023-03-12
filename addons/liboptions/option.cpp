#include "option.h"
#include "../../lib/stringutils.h"
#include "../../lib/vectorutils.h"
#include<iostream>
#include<vector>
#include<sstream>

std::string create_option(int opt_n, std::string opt_s)
{
	std::string s;
	if (!str_empty(opt_s) && opt_n >= 0) {
		std::stringstream new_n;
		new_n << opt_n;
		std::vector<std::string> vec_s = {
			wrap_str(new_n.str(), "[", "]"), ": ", opt_s
		};
		s = ret_vector_s(vec_s);
	}
	return s;
}

void set_option(Option *option, int opt_n, std::string opt_s) {
	option->data = create_option(opt_n, opt_s);
}

void put_option(Option *option) {
	std::cout << option->data;
}
