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

bool starts_with(const std::string& str, const std::string& prefix)
{
	return (str.size() >= prefix.size() && str.compare(0, prefix.size(), prefix)) == 0;
}

bool compare_str(std::string a, std::string b)
{
	return (a == b);
}

bool str_empty(std::string s)
{
	return (s.empty());
}

