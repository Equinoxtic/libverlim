#!/bin/sh

if [ ! -d bin  ]
then
	mkdir bin
fi

if [ ! -d logs ]
then
	mkdir logs
	if [ ! -f log.txt  ]
	then
		touch logs/log.txt
	fi
fi

cmake -G "Visual Studio 17 2022" -A Win32 -S . -B bin
cmake --build bin --target verlimdemo --config Release
