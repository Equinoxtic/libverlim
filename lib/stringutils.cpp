#include "./stringutils.h"

std::string wrap_str(std::string s, std::string a, std::string b)
{
	std::string f_str;	f_str.append(a);
						f_str.append(s);
						f_str.append(b);
	return f_str;
}

std::string quote_str(std::string s)
{
	return wrap_str(s, "\"", "\"");
}
