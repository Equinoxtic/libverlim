#ifndef OPTION_H_
#define OPTION_H_

#include<string>
#include<iostream>

typedef struct {
	std::string data;
} Option;

std::string create_option(int opt_n, std::string opt_s);
void set_option(Option *option, int opt_n, std::string opt_s);
void put_option(Option *option);

#endif // OPTION_H_