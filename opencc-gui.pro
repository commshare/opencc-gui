QT += core gui
TARGET = opencc-gui
TEMPLATE = app
include(opencc-gui.pri)

win32-g++ {
	QMAKE_CXXFLAGS_RELEASE += -O2
	QMAKE_LFLAGS += -static -static-libgcc
}
