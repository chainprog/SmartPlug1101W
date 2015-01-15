#-------------------------------------------------
#
# Project created by QtCreator 2015-01-15T15:19:00
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SmartPlugApp
TEMPLATE = app


SOURCES += main.cpp\
        MainWindow.cpp

HEADERS  += MainWindow.h

FORMS    += MainWindow.ui

FORMS    +=

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../SmartPlugLib/release/ -lSmartPlugLib
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../SmartPlugLib/debug/ -lSmartPlugLib
else:unix: LIBS += -L$$OUT_PWD/../SmartPlugLib/ -lSmartPlugLib

INCLUDEPATH += $$PWD/../SmartPlugLib
DEPENDPATH += $$PWD/../SmartPlugLib
