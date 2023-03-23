#ifndef CCMDS_H_
#define CCMDS_H_

#include "../lib/stringutils.h"
#include "../lib/sys/limsys.h"
#include "../lib/sys/limbuiltin.h"
#include "../common/version.h"
#include<string>

static inline void _cmp_input(std::string in) {
	// BUILT-IN
	if (compare_str(in, "clear")) {
		lsys::screenclear();
	} else if (compare_str(in, "exit")) {
		std::cout << "\0";
	} else if (compare_str(in, "res-install")) {
		lsys::sysexec("git clone https://github.com/Equinoxtic/res.git");
	} else if (compare_str(in, "version")) {
		std::cout << "VERSION: " << get_lib_version();
	} else { lsys::sysexec(in); }
}

#endif // CCMDS_H_