#include "./stringutils.h"
#include "vectorutils.h"
#include<vector>

std::string wrap_str(std::string s, std::string a, std::string b)
{
	std::string f_str;
	std::vector<std::string> vs = { a, s, b };
	f_str = ret_vector_s(vs);
	return f_str;
}

std::string quote_str(std::string s)
{
	return wrap_str(s, "\"", "\"");
}

std::string repeat_str(std::string s, int times)
{
	std::string f;
	for (int i = 0; i < times; ++i)
		f.append(s);
	return f;
}

bool starts_with(const std::string& str, const std::string& prefix)
{
	return (str.size() >= prefix.size() && str.compare(0, prefix.size(), prefix)) == 0;
}

bool find_str(std::string s, std::string targ_s)
{
	bool found = false;
	std::size_t s_npos = std::string::npos,
				found_s = s.find(targ_s);
	if (!s.empty() && !targ_s.empty())
		found = (found_s != s_npos);
	else
		found = false;
	return found;
}

bool compare_str(std::string a, std::string b)
{
	return (a == b);
}

bool str_empty(std::string s)
{
	return (s.empty());
}

