#include "Othello.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication othello(argc, argv);
    Othello menu;


    return othello.exec();
}
