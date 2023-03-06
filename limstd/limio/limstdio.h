#ifndef LIMSTDIO_H_
#define LIMSTDIO_H_

#include "../../lib/stringutils.h"
#include<iostream>
#include<string>
#include<conio.h>

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

inline static void readstr(std::string &s) {
	std::getline(std::cin, s);
}

inline static void readch(char* ch, int size) {
	for (int i = 0; i < size; ++i) {
		ch[i] = getch();
	}
}

#endif // LIMSTDIO_H_
