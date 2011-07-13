SOURCES += src/mainwindow.cpp \
	src/aboutdialog.cpp \
	src/convertfiledialog.cpp \
	src/converter.cpp \
	src/fileselector.cpp \
	src/charsetdetector.cpp \
	src/textreader.cpp \
	src/main.cpp

HEADERS += src/mainwindow.h \
	src/aboutdialog.h \
	src/convertfiledialog.h \
	src/converter.h \
	src/fileselector.h \
	src/charsetdetector.h \
	src/textreader.h \
	src/opencc.h \
	src/opencc_types.h \
	src/uchardet.h

FORMS += src/mainwindow.ui \
	src/aboutdialog.ui \
	src/convertfiledialog.ui

TRANSLATIONS += l10n/zhs.ts \
	l10n/zht.ts

OTHER_FILES +=

win32-msvc2005 {
	HEADERS += src/pstdint.h
}

win32-msvc2008 {
	HEADERS += src/pstdint.h
}