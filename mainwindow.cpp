#include "mainwindow.h"
#include <QVBoxLayout>
#include <QtGui>
#include <QWidget>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    QWidget *topFiller = new QWidget();
    topFiller->setSizePolicy(QSizePolicy::Expanding ,QSizePolicy::Expanding);

    QWidget *bottomFiller = new QWidget();
    bottomFiller->setSizePolicy(QSizePolicy::Expanding ,QSizePolicy::Expanding);

    QVBoxLayout *layout = new QVBoxLayout();
    layout->addWidget(topFiller);
    layout->addWidget(bottomFiller);

    setWindowTitle(tr("Othello_MainBoard"));
    setMinimumSize(256,256);
    resize(480,640);
    this->setStyleSheet("Background-color: lightBlue;");
    setVisible(true);

    QGridLayout *btns = new QGridLayout();

    for(int i=0; i<8; ++i)
    {
//        QHBoxLayout *btns = new QHBoxLayout();
        for(int j=0; j<8; j++)
        {
            btns->setColumnMinimumWidth(j,60);
            btns->setRowMinimumHeight(j,60);
            nuts[i][j] = new QPushButton(this);
            nuts[i][j]->setFixedHeight(60);
            nuts[i][j]->setFixedWidth(60);
            QRegion* region = new QRegion(*(new QRect(nuts[i][j]->x(), nuts[i][j]->y(), 58, 58)),QRegion::Ellipse);
            nuts[i][j]->setMask(*region);
            nuts[0][0]->setStyleSheet("background-color: yellow");
            btns->addWidget(nuts[i][j],i,j);
            nuts[0][0]->setVisible(true);
        }
//        Contents->addLayout(btns);
    }
    setLayout(btns);

}

void MainWindow::paintEvent(QPaintEvent *e)
{
    QPainter p;
    QRectF rect[8][8]; //make a QlineF for the Squares

    p.begin(this);
    for(int j=0; j<8; j++)
    {
        for(int i=0; i<8; i++)
        {
            rect[j][i].setRect(i*60,(j+1)*60,60,60);
            p.drawEllipse(rect[j][i]);
        }
    }

//    p.drawLines();
    p.end();
}

