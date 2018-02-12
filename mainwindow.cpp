#include "mainwindow.h"
#include "Othello.h"
#include <QVBoxLayout>
#include <QtGui>
#include <QWidget>
#include <iostream>
#include <QtDebug>
#include <QObject>
#include <math.h>
#include <cstdlib>

typedef QPair<int,int> Pair;
Q_DECLARE_METATYPE(Pair);

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    QWidget *topFiller = new QWidget();
    topFiller->setSizePolicy(QSizePolicy::Expanding ,QSizePolicy::Expanding);

    QWidget *bottomFiller = new QWidget();
    bottomFiller->setSizePolicy(QSizePolicy::Expanding ,QSizePolicy::Expanding);

    QVBoxLayout *layout = new QVBoxLayout();
    layout->addWidget(topFiller);
    layout->addWidget(bottomFiller);

    layout->setParent(this);
    setWindowTitle(tr("Othello_MainBoard"));
    setMinimumSize(256,256);
    resize(480,640);
    setFixedSize(480,620);
    this->setStyleSheet("Background-color: lightblue;");
    setVisible(true);

    QFont font;
    font.setPointSize(18);

    playerName = new QLabel("User :", this);
    playerName->setGeometry(20, 10, 70, 30);
//    playerName->setStyleSheet("Background-color: gray;");
    playerName->setVisible(true);
    playerName->setFont(font);

    cpuName = new QLabel("Cpu :", this);
    cpuName->setGeometry(260, 10, 60, 30);
//    cpuName->setStyleSheet("Background-color: gray;");
    cpuName->setVisible(true);
    cpuName->setFont(font);

    playerValue = new QLabel("2",this);
    playerValue->setGeometry(100, 10, 30, 30);
//    playerValue->setStyleSheet("Background-color: gray;");
    playerValue->setVisible(true);
    playerValue->setFont(font);

    cpuValue = new QLabel("2",this);
    cpuValue->setGeometry(330, 10, 30, 30);
//    cpuValue->setStyleSheet("Background-color: gray;");
    cpuValue->setVisible(true);
    cpuValue->setFont(font);

    newGame = new QPushButton("New Game", this);
    newGame->setGeometry(20, 560, 140, 40);
    newGame->setStyleSheet("Background-color: darkcyan;");
    newGame->setFont(font);
    newGame->setVisible(true);
    connect(newGame, SIGNAL(clicked()), this, SLOT(openMenu()));

    exit = new QPushButton("Exit", this);
    exit->setGeometry(380, 560, 80, 40);
    exit->setStyleSheet("Background-color: darkcyan;");
    exit->setFont(font);
    exit->setVisible(true);
    connect(exit, SIGNAL(clicked()), QCoreApplication::instance(), SLOT(quit()));


    btns = new QGridLayout(this);
    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8 ; j++)
        {
            nuts[i][j] = new QPushButton(this);
            nuts[i][j]->setFixedHeight(60*(i+2));
            nuts[i][j]->setFixedWidth(60*(j+1));
            QRegion* region = new QRegion(*(new QRect(nuts[i][j]->x()+((j)*60), nuts[i][j]->y()+(60*(i+1)), 59, 59)),QRegion::Ellipse);
            nuts[i][j]->setMask(*region);
            nuts[i][j]->setStyleSheet("background-color: #F8F8FF");
            Pair pair_in(i,j);
            QVariant var = QVariant::fromValue(pair_in);
            nuts[i][j]->setProperty("ij" ,var);
//            connect(nuts[i][j], SIGNAL(clicked()), this, SLOT(proccessKey(i,j)));
            nuts[i][j]->installEventFilter(this);
            btns->addWidget(nuts[i][j],1,8);
            nuts[i][j]->setVisible(true);
        }
    }

//    setInitColor();
//    setRandomFirstTurn();
    this->show();
}

MainWindow::~MainWindow()
{
    disconnect(newGame, SIGNAL(clicked()), this, SLOT(openMenu()));
    disconnect(exit, SIGNAL(clicked()), QCoreApplication::instance(), SLOT(quit()));

    for(int i=0; i<8; i++)
        for(int j=0; j<8; j++)
            disconnect(nuts[i][j], SIGNAL(clicked()), this, SLOT(proccessKey(i,j)));

    delete nuts[8][8];
    delete btns;
    delete exit;
    delete newGame;
    delete playerName;
    delete cpuName;
    delete playerValue;
    delete cpuValue;
}

void MainWindow::paintEvent(QPaintEvent *e)
{
    QPainter p;
    QRectF rect[8][8];
    QLineF hline[9];
    QLineF vline[7];
    p.begin(this);
    //this will draw the circulare button baorder of the page
    for(int j=0; j<8; j++)
    {
        for(int i=0; i<8; i++)
        {
            rect[j][i].setRect(i*60,(j+1)*60,59,59);
            p.drawEllipse(rect[j][i]);
        }
    }
    //this will draw the squares of the page
    for(int i=0; i<9; i++)
    {
        hline[i].setLine(0,(i+1)*60,480,(i+1)*60);
        p.drawLine(hline[i]);
        if(i<7)
        {
            vline[i].setLine((i+1)*60,60,(i+1)*60,540);
            p.drawLine(vline[i]);
        }
    }

    p.end();
}

void MainWindow::proccessKey(int i, int j)
{
//    qDebug() << "Hello world!";
    nuts[i][j]->setStyleSheet("Background-color: black;");
}

void MainWindow::openMenu()
{
    menu = new Othello();
    this->close();
//    this->closeEvent();
}

bool MainWindow::eventFilter(QObject *obj, QEvent *event)
{

    QPushButton *btn = static_cast<QPushButton *>(obj);
    QVariant variant = btn->property("ij");
    Pair pair_out = variant.value<Pair>();
    int i = pair_out.first;
    int j = pair_out.second;
    if (event->type() == QEvent::MouseButtonPress)
    {
        proccessKey(i,j);
        return true;
    } else {
        // standard event processing
        return QObject::eventFilter(obj, event);
    }
}

//void MainWindow::setInitColor()
//{
//    for(int i=0; i<64; i++)
//        colors[i] = -1;
//    nuts[3][3]->setStyleSheet("background-color: green");
//    colors[28] = 0;
//    nuts[4][4]->setStyleSheet("background-color: green");
//    colors[37] = 0;
//    nuts[3][4]->setStyleSheet("background-color: darkcyan");
//    colors[29] = 1;
//    nuts[4][3]->setStyleSheet("background-color: darkcyan");
//    colors[36] = 1;
//    qDebug("ij is : %d" , colors[39]);
//}

//void MainWindow::setRandomFirstTurn()
//{
//    firstTurn = (bool) rand() % 2;
//    inTurn =  firstTurn;
//}
