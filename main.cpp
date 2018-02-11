#include "Othello.h"
#include "mainwindow.h"
#include "resultwindow.h"
#include <QApplication>
#include <QGraphicsEllipseItem>
#include <QPaintEvent>
#include <QtGui>
#include <QRectF>


int main(int argc, char *argv[])
{
    QApplication othello(argc, argv);
//    Othello menu;
//    MainWindow board;
    ResultWindow result;

    return othello.exec();
}
