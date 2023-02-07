#ifndef OPTION_H_
#define OPTION_H_

#include<string>
#include<iostream>

typedef struct {
	std::string _name = "Option";
	std::string _desc = "Description";
	std::string _surround_type = "sqrbr";
	std::string _pointch = " : ";
	bool _quoted = true;
} Option;

void set_option(Option *option, std::string name,
					   std::string desc, std::string surround_type,
					   std::string pointch, bool quoted);
void c_numoption(Option *option, int num);
void add_option(Option *option);

#endif // OPTION_H_