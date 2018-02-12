#include "resultwindow.h"
#include "Othello.h"
#include <QCoreApplication>

ResultWindow::ResultWindow(QWidget *parent) : QMainWindow(parent)
{
    this->setStyleSheet("Background-color: black;");
    this->setFixedSize(480,620);

    QFont font;
    font.setPointSize(40);

    result = new QLabel(this);
    result->setGeometry(120, 120, 240, 120);
    result->setAlignment(Qt::AlignCenter);
    result->setFont(font);
    result->setStyleSheet("color: white;");
    result->setText("You Win");
    result->show();

    QFont font1;
    font1.setPointSize(14);

    newGame = new QPushButton("New Game", this);
    newGame->setGeometry(20,560,140,30);
    newGame->setStyleSheet("Background-color: gray;");
    newGame->setFont(font1);
    newGame->show();
    connect(newGame, SIGNAL(clicked()), this, SLOT(openMenuR()));


    exit = new QPushButton("Exit", this);
    exit->setGeometry(360,560,100,30);
    exit->setStyleSheet("Background-color: gray;");
    exit->setFont(font1);
    exit->show();
    connect(exit, SIGNAL(clicked()), QCoreApplication::instance(), SLOT(quit()));

    this->show();
}

ResultWindow::~ResultWindow()
{
    disconnect(newGame, SIGNAL(clicked()), this, SLOT(openMenuR()));
    disconnect(exit, SIGNAL(clicked()), QCoreApplication::instance(), SLOT(quit()));

    delete newGame;
    delete exit;
    delete result;
}

void ResultWindow::openMenuR()
{
    menuR = new Othello();
    this->close();
}

