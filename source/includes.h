#ifndef INCLUDES_H_
#define INCLUDES_H_

#include "../lib/stringutils.h"
#include "../lib/vectorutils.h"
#include "../lib/timelib.h"
#include "../lib/thread.h"
#include "../fs/fileutils.h"
#include "../fs/file.h"
#include "../lib/sys/limsys.h"
#include "../lib/sys/limbuiltin.h"
#include "../limstd/limio/limstdio.h"
#include "../limstd/limio/limioutils.h"
#include "../logging/logger.h"
#include "../common/version.h"
#include "../common/info.h"
#include "../addons/libshell/shell.h"
#include "../addons/display/seperator.h"
#include "../parser/parser.h"
#include "../include/keyinput.hpp"
#include<iostream>
#include<string>
#include<vector>
#ifdef _WIN32
#include<conio.h>
#else
#include<ncurses.h>
#endif

#endif // INCLUDES_H_