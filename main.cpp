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

//    QWidget window;
//    window.resize(500,500);
//    window.setWindowTitle(QApplication::translate("main_board", "MainBoard"));
//    window.setVisible(true);




//    QMainWindow *window = new QMainWindow();

//            window->setWindowTitle(QString::fromUtf8("Round-Shaped QPushButton"));
//            window->resize(300, 250);

//            QWidget *centralWidget = new QWidget(window);

//        QPushButton* button = new QPushButton(centralWidget);
//        button->setText("Button 1");
//        button->setFixedHeight(200);
//        button->setFixedWidth(200);

////        //Set Starting point of region 5 pixels inside , make region width & height
////        //values same and less than button size so that we obtain a pure-round shape
//        QRegion* region = new QRegion(*(new QRect(button->x()+10,button->y(),190,190)),QRegion::Ellipse);
//        button->setMask(*region);

//        window->setCentralWidget(centralWidget);
//        window->show();

    return othello.exec();
}
