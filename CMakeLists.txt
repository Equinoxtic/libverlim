cmake_minimum_required(VERSION 3.2)

project("verlimlib" VERSION 0.4 DESCRIPTION "LibVerlim Project by Lunaxtic")

set(VERLIM_ADDONS
	addons/liboptions/option.cpp
	addons/liboptions/option.h
	addons/liboptions/optionmenu.cpp
	addons/liboptions/optionmenu.h
	addons/libshell/shell.cpp
	addons/libshell/shell.h
	addons/libshell/shellenv.h
	addons/display/bar.cpp
	addons/display/bar.h
	addons/display/seperator.cpp
	addons/display/seperator.h
	addons/display/memstat.cpp
	addons/display/memstat.h
)

source_group("addons" FILES ${VERLIM_ADDONS})

set(VERLIM_INCLUDE
	include/libverlim/error.h
	include/libverlim/warn.h
	include/libverlim/vtime.h
)

source_group("include\\libverlim" FILES ${VERLIM_INCLUDE})

set(VERLIM_MAINLIB
	lib/convert.h
	lib/stringutils.h
	lib/stringutils.cpp
	lib/thread.h
	lib/thread.cpp
	lib/timelib.h
	lib/mem.h
	lib/winmem.h
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

set(VERLIMIO
	limstd/limio/limstdio.h
	limstd/limio/limioutils.h
)

source_group("limstd\\limio" FILES ${VERLIMIO})

set(VERLIMCOMMON
	common/version.h
	common/info.h
)

source_group("common" FILES ${VERLIMCOMMON})

set(VERLIM_LOGGING
	logging/consolemsg.h
	logging/consolemsg.cpp
	logging/logger.cpp
	logging/logger.h
)

source_group("logging" FILES ${VERLIM_LOGGING})

set(VERLIM_HTTP
	http/link.h
	http/link.cpp
	http/browser.h
	http/browser.cpp
)

source_group("http" FILES ${VERLIM_HTTP})

set(VERLIM_MATH
	math/libyield/percentage.h
	math/libyield/yield.h
)

source_group("math\\libyield" FILES ${VERLIM_MATH})

set(VERLIM_MAIN_SOURCE
	source/includes.h
	source/loader.h
	source/verlim.h
)

source_group("source" FILES ${VERLIM_MAIN_SOURCE})

set(VERLIM_SRC
	${VERLIM_ADDONS}
	${VERLIM_INCLUDE}
	${VERLIM_MAINLIB}
	${VERLIM_SYS}
	${VERLIM_FS}
	${VERLIMIO}
	${VERLIMCOMMON}
	${VERLIM_LOGGING}
	${VERLIM_HTTP}
	${VERLIM_MATH}
	${VERLIM_MAIN_SOURCE}
)

include_directories(
	BEFORE
	lib
	fs
	logging
	limstd
	common
	include
	include/libverlim
	addons
	http
	math
)

add_library(verlimsrc STATIC ${VERLIM_SRC})
add_executable(verlimdemo verlim.cpp)
target_link_libraries(verlimdemo verlimsrc)
