#ifndef LIMSYS_H_
#define LIMSYS_H_

#include<string>
#include<stdlib.h>

namespace lsys {
	std::string get_platform();
	void sysexec(std::string c);
}
#endif // LIMSYS_H_
