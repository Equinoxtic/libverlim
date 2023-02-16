#!/bin/sh

if [ ! -d bin  ]
then
	mkdir bin
fi

cmake -G "Visual Studio 17 2022" -A Win32 -S . -B bin
cmake --build bin --target verlimdemo --config Release
