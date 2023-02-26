#include "./thread.h"
#include<iostream>
#include<string>

#ifdef _WIN32
	#include<Windows.h>
#else
	#include<unistd.h>
#endif

void thread_pause(bool silent)
{
	std::string s = ((!silent) ? "\0" : "Press any key to continue...");
	std::cout << s;
	getchar();
}

unsigned get_sleep_time(unsigned ms)
{
	unsigned res;
	if (ms > 0)
		res = ms * 1000;
	return res;
}

#ifdef _WIN32
	
	void s_sleep(unsigned ms) {
		Sleep(get_sleep_time(ms));
	}
	
	void ms_sleep(unsigned ms) {
		Sleep(ms);
	}

#else
	
	void s_sleep(unsigned ms) {
		usleep(get_sleep_time(ms));
	}
	
	void ms_sleep(unsigned ms) {
		usleep(ms);
	}

#endif
