#include "stringutils.h"
#include "thread.h"
#include "fs/fileutils.h"
#include "fs/file.h"
#include<iostream>
#include<string>

void demo_loader()
{
	std::string current_os = get_platform();

	std::cout << "\n" << wrap_str("Running AmiXLib Demo", "-----<", ">-----") << "\n"
			  << "Current OS: " << current_os << "\n"
			  << "Press Enter to Continue. Enjoy!";

	thread_pause();

	screenclear();
}

int main(int argc, char **argv)
{
	demo_loader();
	thread_pause();
}
