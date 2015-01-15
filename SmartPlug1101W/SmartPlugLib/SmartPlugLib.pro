#-------------------------------------------------
#
# Project created by QtCreator 2015-01-15T15:25:37
#
#-------------------------------------------------

QT       -= gui
QT       += network

TARGET = SmartPlugLib
TEMPLATE = lib

DEFINES += SMARTPLUGLIB_LIBRARY

SOURCES += \
    SmartPlug.cpp \
    DeviceFinder.cpp

HEADERS +=\
        smartpluglib_global.h \
    SmartPlug.h \
    DeviceFinder.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
