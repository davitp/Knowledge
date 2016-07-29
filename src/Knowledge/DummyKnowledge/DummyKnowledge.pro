QT       -= core gui
CONFIG   += c++14

TARGET = DummyKnowledge
TEMPLATE = lib

DEFINES += DUMMYKNOWLEDGE_LIBRARY

SOURCES += \
    Operations/DummyInfoOperation.cpp

HEADERS += \
    Operations/DummyInfoOperation.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

win32:     LIBS += -L$$OUT_PWD/../BaseKnowledge/ -lBaseKnowledge
else:unix: LIBS += -L$$OUT_PWD/../BaseKnowledge/ -lBaseKnowledge

INCLUDEPATH += $$PWD/../
DEPENDPATH += $$PWD/../BaseKnowledge
