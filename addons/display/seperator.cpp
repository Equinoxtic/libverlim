#include "seperator.h"
#include "../../lib/stringutils.h"
#include<iostream>
#include<sstream>

int check_len(int val, int max) { return ((val >= max) ? max : val); }

std::string create_seperator(int length) {
	return repeat_str("-", check_len(length, 256));
}

std::string formatted_seperator(std::string s, int length, std::string begin, std::string end) {
	std::stringstream _s;
	if (!str_empty(s) && !str_empty(end)) {
		_s << begin << repeat_str(s, check_len(length, 256)) << end;
	}
	return _s.str();
}

void set_seperator(Seperator *sepptr, int length) {
	sepptr->data = create_seperator(length);
}

void set_formatted_seperator(Seperator *sepptr, std::string s, int length, std::string end) {
	sepptr->data = formatted_seperator(s, length, end);
}

void display_seperator(Seperator *seperator) {
	std::cout << seperator->data;
}
