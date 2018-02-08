#ifndef OTHELLO_H
#define OTHELLO_H


#include <QtWidgets/qmainwindow.h>
#include <QtWidgets/qpushbutton.h>
#include <QtWidgets/qtextedit.h>
#include <qgridlayout.h>
#include <qlabel.h>

using namespace std;

class Othello : public QMainWindow {

    Q_OBJECT

public:
    Othello(QWidget * = 0);
    ~Othello();

public slots:
//    void openSecondWindow();

private:
    QPushButton *exit;
    QPushButton *playerVsCpu;
    QPushButton *playerVsplayer;
    QLabel *image;
    QLabel *gameName;
    QGridLayout *menuLayout;

};


#endif //OTHELLO_H
