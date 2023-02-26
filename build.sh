#!/bin/sh

if [ ! -d build  ]
then
	mkdir build
fi

cmake -G "Visual Studio 17 2022" -A Win32 -S . -B build
cmake --build build --target verlimdemo --config Release
