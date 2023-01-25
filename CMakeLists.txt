cmake_minimum_required(VERSION 3.2)

project("amixlib")

set(AMIXLIB_LIB
	lib/stringutils.h
	lib/stringutils.cpp
	lib/thread.h
	lib/thread.cpp
	lib/rtime.h
	lib/rtime.cpp
)

set(AMIXLIB_SYS
	lib/sys/sysamix.h
	lib/sys/sysamix.cpp
	lib/sys/amixcalls.h
	lib/sys/amixcalls.cpp
)

set(AMIXFS
	fs/file.h
	fs/file.cpp
	fs/fileutils.h
	fs/fileutils.cpp
	fs/paths.h
	fs/paths.cpp
)

source_group("lib" FILES ${AMIXLIB_LIB})
source_group("lib\\sys" FILES ${AMIXLIB_SYS})
source_group("lib\\fs" FILES ${AMIXLIB_FS})

set(AMIXLIB_LOGGING
	logging/consolemsg.h
	logging/consolemsg.cpp
	logging/logger.cpp
	logging/logger.h
)

source_group("logging" FILES ${AMIXLIB_LOGGING})

set(AMIXSOURCE
	${AMIXLIB_LIB}
	${AMIXLIB_SYS}
	${AMIXFS}
	${AMIXLIB_LOGGING}
)

link_directories(${AMIXSOURCE})

include_directories(
	BEFORE
	lib
)

add_library(amixlibsource STATIC ${AMIXSOURCE})

add_executable(amixdemo amix.cpp)

target_link_libraries(amixdemo amixlibsource)

