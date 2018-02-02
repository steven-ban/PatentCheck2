#-------------------------------------------------
#
# Project created by QtCreator 2017-12-29T15:16:52
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PatentCheck2
TEMPLATE = app

TRANSLATIONS += zh-cn.ts


SOURCES += main.cpp\
        mainwindow.cpp \
    textdlg.cpp

HEADERS  += mainwindow.h \
    textdlg.h

FORMS    += mainwindow.ui \
    textdlg.ui

DISTFILES +=

RESOURCES += \
    resources.qrc
