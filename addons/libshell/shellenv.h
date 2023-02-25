#ifndef SHELLENV_H_
#define SHELLENV_H_

#include<string>

inline static std::string default_env() {
	return "env";
}

inline static std::string auto_env()
{
	std::string s;
	#ifdef _WIN32
	s = "win32";
	#else
	s = "unix";
	#endif
	return s;
}

#endif // SHELLENV_H_