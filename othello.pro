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
    square.cpp \
    mainwindow.cpp

HEADERS  += \
    Othello.h \
    square.h \
    mainwindow.h

FORMS    += othello.ui
