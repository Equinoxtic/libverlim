#ifndef LIMSTDIO_H_
#define LIMSTDIO_H_

#include "../../lib/stringutils.h"
#include<iostream>
#include<string>
#include<conio.h>

namespace lstd
{
	template<typename T>
	inline static void prints(T c, std::string end = "\n") {
		std::cout << c << (compare_str(end, "\n") ? "\n" : end);
	}

	template<typename T>
	inline static void reads(T &s) {
		std::getline(std::cin, s);
	}
}

#endif // LIMSTDIO_H_
