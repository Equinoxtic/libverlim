#ifndef LIMSTDIO_H_
#define LIMSTDIO_H_

#include "stringutils.h"
#include<string>

inline static void printstr(std::string c, std::string end = "\n")
{
	if (compare_str(end, "\n"))
		std::cout << c << "\n";
	else
		std::cout << c << end;
}

inline static void printint(int n, std::string end = "\n")
{
	if (compare_str(end, "\n"))
		std::cout << n << "\n";
	else
		std::cout << n << end;
}

inline static void printfl(float n, std::string end = "\n")
{
	if (compare_str(end, "\n"))
		std::cout << n << "\n";
	else
		std::cout << n << end;
}

inline static void printbool(bool x, std::string end = "\n")
{
	std::string bool_s = ((x==true) ? "true" : "false");
	if (compare_str(end, "\n"))
		std::cout << bool_s << "\n";
	else
		std::cout << bool_s << end;
}

inline static void printnbool(int x, std::string end = "\n")
{
	std::string bool_s = ((x>=1) ? "true" : "false");
	if (compare_str(end, "\n"))
		std::cout << bool_s << "\n";
	else
		std::cout << bool_s << end;
}

#endif // LIMSTDIO_H_
