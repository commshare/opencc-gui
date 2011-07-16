TARGET = uchardet
TEMPLATE = lib
CONFIG += dll
include(uchardet.pri)

win32-g++ {
	QMAKE_CXXFLAGS_RELEASE += -O2
	QMAKE_LFLAGS += -static -static-libgcc
}