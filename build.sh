#!/bin/sh

if [ ! -d build  ]; then
	mkdir build
fi

if [ ! -d logs ]; then
	mkdir logs
fi

if [ ! -f logs/log.txt ]; then
	touch logs/logfile.txt
fi

cmake -G "Visual Studio 17 2022" -A Win32 -S . -B build
cmake --build build --target verlimdemo --config Release
