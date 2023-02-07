#ifndef INFO_H_
#define INFO_H_

#include<string>
#include "fileutils.h"
#include "file.h"

inline static std::string get_lib_info()
{
	std::string ret_s;

	ret_s =	"\nAuthor : Lunaxtic (Vertic)";
	ret_s.append("\nLibVerlim Project by Lunaxtic");
	ret_s.append("\n\"Love The Moon. <3\"\n");

	return ret_s;
}

#endif // INFO_H_