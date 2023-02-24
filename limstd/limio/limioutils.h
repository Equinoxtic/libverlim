#ifndef LIMIOUTILS_H_
#define LIMIOUTILS_H_

#include "../../lib/stringutils.h"
#include "../../lib/thread.h"
#include<iostream>
#include<string>

inline static std::string nl() { return "\n"; }
inline static std::string tab() { return "\t"; }
inline static std::string vtab() { return "\v"; }
inline static std::string bkspc() { return "\b"; }

inline static void o_nl() { std::cout << "\n"; }
inline static void o_tab() { std::cout << "\t"; }
inline static void o_vtab() { std::cout << "\v"; }
inline static void o_bkspc() { std::cout << "\b"; }

inline static void typer(std::string &s, int len, unsigned del = 25)
{
	if (!str_empty(s) && s.length() >= 1) {
		for (int i = 0; i < len; ++i) {
			std::cout << s[i]; ms_sleep(del);
		}
	}
}

#endif // LIMIOUTILS_H_
