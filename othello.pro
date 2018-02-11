#-------------------------------------------------
#
# Project created by QtCreator 2018-02-05T13:12:41
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = othello
TEMPLATE = app


SOURCES += main.cpp \
    Othello.cpp \
    mainwindow.cpp \
    resultwindow.cpp

HEADERS  += \
    Othello.h \
    mainwindow.h \
    resultwindow.h

FORMS    += othello.ui
