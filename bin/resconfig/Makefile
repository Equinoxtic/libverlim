GPP = g++
FILE = resconfig
INCLUDED_LIBRARIES = 	../../lib/stringutils.cpp \
						../../lib/thread.cpp \
						../../lib/sys/limsys.cpp \
						../../lib/sys/limbuiltin.cpp \
						../../addons/consoleui/titleheader.cpp \
						../../addons/consoleui/optionbox.cpp \
						../../addons/liboptions/option.cpp \
						../../addons/liboptions/optionutils.cpp \
						../../fs/file.cpp \
						../../fs/fileutils.cpp

build:
	$(GPP) -o ../$(FILE).exe $(FILE).cpp $(INCLUDED_LIBRARIES)
