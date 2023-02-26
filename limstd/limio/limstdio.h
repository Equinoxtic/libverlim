#ifndef LIMSTDIO_H_
#define LIMSTDIO_H_

#include "../../lib/stringutils.h"
#include<iostream>
#include<string>

inline static void printstr(std::string c, std::string end = "\n") {
	std::cout << c << (compare_str(end, "\n") ? "\n" : end);
}

inline static void printint(int n, std::string end = "\n") {
	std::cout << n << (compare_str(end, "\n") ? "\n" : end);
}

inline static void printfl(float n, std::string end = "\n") {
	std::cout << n << (compare_str(end, "\n") ? "\n" : end);
}

inline static void printbool(bool x, std::string end = "\n") {
	std::string bool_s = ((x==true) ? "true" : "false");
	std::cout << bool_s << (compare_str(end, "\n") ? "\n" : end);
}

inline static void printnbool(int x, std::string end = "\n") {
	std::string bool_s = ((x>=1) ? "true" : "false");
	std::cout << bool_s << (compare_str(end, "\n") ? "\n" : end);
}

#endif // LIMSTDIO_H_
