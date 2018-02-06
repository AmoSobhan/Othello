#include "othello.h"
#include "ui_othello.h"

Othello::Othello(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Othello)
{
    ui->setupUi(this);
}

Othello::~Othello()
{
    delete ui;
}
