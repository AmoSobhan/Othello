#include "Othello.h"
#include <QApplication>
#include "mainwindow.h"
#include "resaultwindow.h"
#include <QtGui>

int main(int argc, char *argv[])
{
    QApplication othello(argc, argv);
    Othello menu;
//    MainWindow board;
//    ResaultWindow result;

    return othello.exec();
}
