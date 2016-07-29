QT       -= core gui
CONFIG   += c++14

TARGET = BaseKnowledge
TEMPLATE = lib

DEFINES += BASEKNOWLEDGE_LIBRARY

SOURCES += BaseKnowledge.cpp

HEADERS += BaseKnowledge.hpp

unix {
    target.path = /usr/lib
    INSTALLS += target
}
