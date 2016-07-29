QT       -= core gui
CONFIG   += c++14

TARGET = BaseKnowledge
TEMPLATE = lib

DEFINES += BASEKNOWLEDGE_LIBRARY

SOURCES += \
    InfoOperation/InfoOperation.cpp

HEADERS += \
    InfoOperation/InfoOperation.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
