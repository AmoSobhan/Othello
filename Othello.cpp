#include "Othello.h"
#include <QtCore/qcoreapplication.h>
#include <QGridLayout>
#include <QLabel>
#include <QPixmap>
#include <QRegion>

Othello::Othello(QWidget *parent) : QMainWindow(parent)
{
    this->setFixedSize(500, 500);
    this->setStyleSheet("Background-color: blue;");

    image = new QLabel("Othello",this);
    image->setGeometry(100,70,300,200);
    QPixmap pic("C:/Users/lenovo/Desktop/othello.jpg");
    this->image->setPixmap(pic);

    gameName = new QLabel("Well Come", this);
    //set font
    QFont font = gameName->font();
    font.setPointSize(28);
    gameName->setFont(font);
    gameName->setGeometry(160,10,250,40);
    gameName->setStyleSheet("color: white;");


    //set font
    QFont font2;
    font2.setPointSize(12);
    font2.setBold(false);

    playerVsCpu = new QPushButton("Player   vs   CPU   ", this);
    playerVsCpu->setGeometry(150,300,200,20);
    playerVsCpu->setStyleSheet("Background-color: gray;");
    playerVsCpu->setFont(font2);

    playerVsplayer = new QPushButton("Player   vs   Player",this);
    playerVsplayer->setGeometry(150,330,200,20);
    playerVsplayer->setStyleSheet("Background-color: gray;");
    playerVsplayer->setFont(font2);

    exit = new QPushButton("Exit",this);
    exit->setGeometry(370,430,100,40);
    exit->setStyleSheet("Background-color: gray;");

    QFont font1 = exit->font();
    font1.setPointSize(14);
    font1.setBold(false);
    exit->setFont(font1);

    this->setWindowTitle("Othello");
    this->setVisible(true);

//    connect(playerVsCpu, SIGNAL(clicked()), this, SLOT(openSecondWindow());
    connect(exit, SIGNAL(clicked()), QCoreApplication::instance(), SLOT(quit()));


}

Othello::~Othello()
{
//    disconnect(send, SIGNAL(clicked()), this, SLOT(sayWelcome()));
    disconnect(exit, SIGNAL(clicked()), QCoreApplication::instance(), SLOT(quit()));

    delete exit;
    delete playerVsCpu;
    delete playerVsplayer;
    delete image;
    delete gameName;
}

//Othello::openSecondWindow()

