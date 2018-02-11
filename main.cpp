#include "Othello.h"
#include <QApplication>
#include <QGraphicsEllipseItem>
#include <QPaintEvent>
#include "QPainter.h"
#include "mainwindow.h"
#include "square.h"
#include <QtGui>
#include <QRectF>


int main(int argc, char *argv[])
{
    QApplication othello(argc, argv);
//    Othello menu;
    MainWindow board;

//    QMainWindow *window = new QMainWindow();

//        window->setWindowTitle(QString::fromUtf8("Round-Shaped QPushButton"));
//        window->resize(500, 500);

//        QWidget *centralWidget = new QWidget(window);

//        QPushButton* button = new QPushButton(centralWidget);
//        button->setText("Button 1");
//        button->setFixedHeight(60);
//        button->setFixedWidth(60);
////        button->setGeometry(0,60,60,60);


//        //Set Starting point of region 5 pixels inside , make region width & height
//        //values same and less than button size so that we obtain a pure-round shape
//        QRegion* region = new QRegion(*(new QRect(button->x(),button->y(),60,60)),QRegion::Ellipse);
//        button->setMask(*region);

//        window->setCentralWidget(centralWidget);
//        window->show();

    return othello.exec();
}
