#ifndef OPTION_H_
#define OPTION_H_

#include<string>
#include<iostream>

typedef struct Option {
	std::string data;
} Option;

std::string create_option(int opt_n, std::string opt_s);
std::string create_namedoption(std::string opt_n, std::string opt_s);
void set_option(Option *option, int opt_n, std::string opt_s);
void set_option(Option *option, std::string opt_n, std::string opt_s);
void put_option(Option *option);

#endif // OPTION_H_