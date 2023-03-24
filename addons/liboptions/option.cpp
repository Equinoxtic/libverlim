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
			wrap_str(new_n.str(), "(", ")"), ": ", opt_s
		};
		s = ret_vector_s(vec_s);
	}
	return s;
}

std::string create_namedoption(std::string opt_n, std::string opt_s)
{
	std::string s;
	if (!str_empty(opt_n) && !str_empty(opt_s)) {
		std::vector<std::string> vs = {
			wrap_str(opt_n, "[", "]"), ": ", opt_s
		};
		s = ret_vector_s(vs);
	}
	return s;
}

void set_option(Option *option, int opt_n, std::string opt_s) {
	option->data = create_option(opt_n, opt_s);
}

void set_option(Option *option, std::string opt_n, std::string opt_s) {
	option->data = create_namedoption(opt_n, opt_s);
}

std::string create_options_list(std::vector<std::pair<int, std::string>> vec_o) {
	std::stringstream vf, sn;
	for (size_t i = 0; i < vec_o.size(); ++i) {
		sn << vec_o[i].first;
		vf << wrap_str(sn.str(), "[", "]") << ": " << vec_o[i].second << "/";
	}
	return wrap_str(vf.str(), "(", ")");
}

std::string create_namedoptions_list(std::vector<std::pair<std::string, std::string>> vec_o) {
	std::stringstream vf;
	for (size_t i = 0; i < vec_o.size(); ++i) {
		vf << wrap_str(vec_o[i].first, "[", "]") << ": " << vec_o[i].second << "/";
	}
	return wrap_str(vf.str(), "(", ")");
}

void set_options_list(Option *option, std::vector<std::pair<int, std::string>> vec_o) {
	option->data = create_options_list(vec_o);
}

void set_namedoptions_list(Option *option, std::vector<std::pair<std::string, std::string>> vec_o) {
	option->data = create_namedoptions_list(vec_o);
}

void put_option(Option *option) {
	std::cout << option->data;
}
