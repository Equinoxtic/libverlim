cmake_minimum_required(VERSION 3.2)

project("verlimlib" VERSION 0.4 DESCRIPTION "LibVerlim Project by Lunaxtic")

set(CMAKE_CXX_STANDARD 17)

set(VERLIM_ADDONS
	addons/liboptions/option.cpp
	addons/liboptions/option.h
	addons/liboptions/optionutils.cpp
	addons/liboptions/optionutils.h
	addons/libshell/shell.cpp
	addons/libshell/shell.h
	addons/libshell/shellenv.h
	addons/display/bar.cpp
	addons/display/bar.h
	addons/display/seperator.cpp
	addons/display/seperator.h
	addons/display/memstat.cpp
	addons/display/memstat.h
	addons/consoleui/dialoguebox.cpp
	addons/consoleui/dialoguebox.h
	addons/consoleui/optionbox.cpp
	addons/consoleui/optionbox.h
	addons/consoleui/textbox.cpp
	addons/consoleui/textbox.h
	addons/consoleui/titleheader.cpp
	addons/consoleui/titleheader.h
	addons/libcommand/command.cpp
	addons/libcommand/command.h
	addons/libcommand/commandutils.cpp
	addons/libcommand/commandutils.h
)

source_group("addons" FILES ${VERLIM_ADDONS})

set(VERLIM_PARSER
	parser/parser.cpp
	parser/parser.h
	parser/bincmds.h
)

source_group("parser" FILES ${VERLIM_PARSER})

set(VERLIM_INCLUDE
	include/libverlim/error.h
	include/libverlim/warn.h
	include/libverlim/vtime.h
	include/color.hpp
	include/keyinput.hpp
)

source_group("include\\libverlim" FILES ${VERLIM_INCLUDE})

set(VERLIM_MAINLIB
	lib/convert.h
	lib/stringutils.h
	lib/stringutils.cpp
	lib/chtools.h
	lib/chtools.cpp
	lib/thread.h
	lib/thread.cpp
	lib/timelib.h
	lib/mem.h
	lib/winmem.h
	lib/vectorutils.h
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
	math/basicarithmetic.h
)

source_group("math" FILES ${VERLIM_MATH})

set(VERLIM_MAIN_SOURCE
	source/includes.h
	source/loader.h
	source/verlim.h
)

source_group("source" FILES ${VERLIM_MAIN_SOURCE})

set(LVLIBC
	lvlibc/strtools.cpp
	lvlibc/strtools.h
)

source_group("lvlibc" FILES ${LVLIBC})

set(VERLIM_SRC
	${VERLIM_ADDONS}
	${VERLIM_PARSER}
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
	${LVLIBC}
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

if (EXISTS res)
	file(COPY res DESTINATION Release/)
endif()

if (EXISTS logs)
	file(COPY logs DESTINATION Release/)
endif()

if (EXISTS bin)
	file(COPY bin DESTINATION Release/)
endif()

if (EXISTS libversion.txt)
	file(COPY libversion.txt DESTINATION Release/)
endif()

add_executable(verlimdemo verlim.cpp)
target_link_libraries(verlimdemo verlimsrc)
