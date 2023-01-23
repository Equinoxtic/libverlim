cmake_minimum_required(VERSION 3.2)

project("amixlib")

set(AMIXLIB_LIB
	lib/stringutils.h
	lib/stringutils.cpp
	lib/thread.h
	lib/thread.cpp
)

set(AMIXLIB_SYS
	lib/sys/sysamix.h
	lib/sys/sysamix.cpp
	lib/sys/amixcalls.h
	lib/sys/amixcalls.cpp
)

set(AMIXLIB_FS
	lib/fs/file.h
	lib/fs/file.cpp
	lib/fs/fileutils.h
	lib/fs/fileutils.cpp
)

source_group("lib" FILES ${AMIXLIB_LIB})
source_group("lib\\sys" FILES ${AMIXLIB_SYS})
source_group("lib\\fs" FILES ${AMIXLIB_FS})

set(AMIXSOURCE
	${AMIXLIB_LIB}
	${AMIXLIB_SYS}
	${AMIXLIB_FS}
)

link_directories(${AMIXSOURCE})

include_directories(
	BEFORE
	lib
)

add_library(amixlibsource STATIC ${AMIXSOURCE})

add_executable(amixdemo amix.cpp)

target_link_libraries(amixdemo amixlibsource)

