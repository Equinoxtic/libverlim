cmake_minimum_required(VERSION 3.2)

project("verlimlib")

set(VERLIM_INCLUDE
	include/libverlim/error.h
	include/libverlim/warn.h
)

source_group("include\\libverlim" FILES ${VERLIM_INCLUDE})

set(VERLIM_MAINLIB
	lib/stringutils.h
	lib/stringutils.cpp
	lib/thread.h
	lib/thread.cpp
	lib/rtime.h
	lib/rtime.cpp
)

set(VERLIM_SYS
	lib/sys/limsys.h
	lib/sys/limsys.cpp
	lib/sys/limbuiltin.h
	lib/sys/limbuiltin.cpp
)

set(VERLIM_FS
	fs/file.h
	fs/file.cpp
	fs/fileutils.h
	fs/fileutils.cpp
	fs/paths.h
	fs/paths.cpp
)

source_group("lib" FILES ${VERLIM_MAINLIB})
source_group("lib\\sys" FILES ${VERLIM_SYS})
source_group("lib\\fs" FILES ${VERLIM_FS})

set(VERLIM_LOGGING
	logging/consolemsg.h
	logging/consolemsg.cpp
	logging/logger.cpp
	logging/logger.h
)

source_group("logging" FILES ${VERLIM_LOGGING})

set(VERLIM_SRC
	${VERLIM_MAINLIB}
	${VERLIM_SYS}
	${VERLIM_FS}
	${VERLIM_LOGGING}
)

link_directories(${VERLIM_SRC})

include_directories(
	BEFORE
	lib
	fs
	logging
)

add_library(verlimsrc STATIC ${VERLIM_SRC})

add_executable(verlimdemo verlim.cpp)

target_link_libraries(verlimdemo verlimsrc)

