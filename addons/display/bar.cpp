#include "bar.h"
#include "../../lib/thread.h"
#include "../../lib/stringutils.h"
#include "../../lib/sys/limbuiltin.h"
#include<iostream>

int bar_check(int val, int min, int max) {
	int res;
	if (val < min) res = min;
	else if (val >= max) res = max;
	else res = val;
	return res;
}

unsigned u_bar_check(unsigned val, unsigned min, unsigned max)
{
	unsigned res;
	if (val < min) res = min;
	else if (val >= max) res = max;
	else res = val;
	return res;
}

void create_bar(unsigned delay, int len)
{
	unsigned ndelay = u_bar_check(delay, 25, 150);
	int nlen = bar_check(len, 15, 30);

	std::vector<std::string> nbar = {"[", "|", "]"};
	for (int i = 0; i < nlen; ++i) {
		for (int k = 0; k < (nlen - nlen) + 1; ++k) 
			nbar.insert(nbar.begin() + 1, "|");
		for (size_t j = 0; j < nbar.size(); ++j)
			std::cout << nbar[j];
		ms_sleep(750);
		for (int x = 0; x < (nlen - nlen) + 1; ++x)
			std::cout << repeat_str("\b", nbar.size());
	}
}