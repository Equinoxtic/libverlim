#ifndef OPTION_H_
#define OPTION_H_

#include<string>
#include<iostream>
#include<vector>

typedef struct Option {
	std::string data;
} Option;

std::string create_option(int opt_n, std::string opt_s);
std::string create_namedoption(std::string opt_n, std::string opt_s);
void set_option(Option *option, int opt_n, std::string opt_s);
void set_option(Option *option, std::string opt_n, std::string opt_s);
std::string create_options_list(std::vector<std::pair<int, std::string>> vec_o);
std::string create_namedoptions_list(std::vector<std::pair<std::string, std::string>> vec_o);
void set_options_list(Option *option, std::vector<std::pair<int, std::string>> vec_o);
void set_namedoptions_list(Option *option, std::vector<std::pair<std::string, std::string>> vec_o);
void put_option(Option *option);

#endif // OPTION_H_