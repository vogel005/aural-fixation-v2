#-------------------------------------------------
#
# Project created by QtCreator 2016-09-12T18:48:09
#
#-------------------------------------------------

QT       += core gui multimedia widgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = aural-fixation
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    playlist.cpp \
    mediaplayer.cpp

HEADERS  += mainwindow.h \
    playlist.h \
    mediaplayer.h

FORMS    += mainwindow.ui
