#ifndef OTHELLO_H
#define OTHELLO_H


#include "mainwindow.h"
#include "resultwindow.h"

#include <QtWidgets/qmainwindow.h>
#include <QtWidgets/qpushbutton.h>
#include <QtWidgets/qtextedit.h>
#include <qgridlayout.h>
#include <qlabel.h>

class MainWindow;
class ResultWindow;

using namespace std;

class Othello : public QMainWindow
{

    Q_OBJECT

public:
    Othello(QWidget * = 0);
    ~Othello();

public slots:
    void openSecondWindow();

private:
    QPushButton *exit;
    QPushButton *playerVsCpu;
    QPushButton *playerVsplayer;
    QLabel *image;
    QLabel *gameName;
    MainWindow *board;
};


#endif //OTHELLO_H
