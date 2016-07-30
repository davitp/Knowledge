QT       -= core gui
CONFIG   += c++14

TARGET = BaseKnowledge
TEMPLATE = lib

DEFINES += BASEKNOWLEDGE_LIBRARY

SOURCES += \
    InfoOperation/InfoOperation.cpp \
    Value/ValueTree.cpp \
    Value/ArgTree.cpp

HEADERS += \
    InfoOperation/InfoOperation.h \
    Shortcuts/StdShortcuts.h \
    Value/ValueTree.h \
    Value/ArgTree.h \
    Shortcuts/Constants.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
