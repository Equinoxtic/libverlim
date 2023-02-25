#ifndef VERLIM_H_
#define VERLIM_H_

#include "includes.h"
#include "loader.h"

inline static void initialize()
{
	clear_logfile();
	demo_loader();
	log_message("LibVerlim console launched!");
	clear_logfile();
	screenclear();
}

#endif // VERLIM_H_