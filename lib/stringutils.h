#ifndef STRINGUTILS_H_
#define STRINGUTILS_H_

#include<string>

std::string wrap_str(std::string s, std::string a, std::string b);
std::string quote_str(std::string s);
std::string repeat_str(std::string s, int times);
bool starts_with(const std::string& str, const std::string& prefix);
bool find_str(std::string s, std::string targ_s);
bool compare_str(std::string a, std::string b);
bool str_empty(std::string s);

#endif // STRINGUTILS_H_
