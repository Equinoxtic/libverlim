#include "seperator.h"
#include "../../lib/stringutils.h"
#include<iostream>

int check_len(int val, int max) { return ((val >= max) ? max : val); }

void create_seperator(int length ) {
	std::cout << repeat_str("-", check_len(length, 256));
}

void formatted_seperator(std::string s, int length) {
	std::cout << repeat_str(s, check_len(length, 256));
}
