#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QGridLayout>
#include <QLabel>
#include <QMainWindow>
#include <QPaintEvent>
#include <QPushButton>
#include <QTextEdit>
#include "Othello.h"
#include <QObject>

class Othello;

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
//    bool firstTurn;
//    bool inTurn; //Zero stands for dark and One stands for light
//    int colors[64];

    QPushButton *nuts[8][8];
    QGridLayout *btns;
    QPushButton *exit;
    QPushButton *newGame;
    QLabel *playerName;
    QLabel *cpuName;
    QLabel *playerValue;
    QLabel *cpuValue;
    Othello *menu;

//    void setInitColor();
//    void setRandomFirstTurn();
//    void checkTrun();
//    void checkEnableKeys();
//    void checkLeft();
//    void checkRight();
//    void checkUp();
//    void checkDown();
//    void checkRightUp();
//    void checkLeftUp();
//    void checkRightDown();
//    void checkLeftDown();
protected:
    void paintEvent(QPaintEvent * e);
    bool eventFilter(QObject *obj, QEvent *event);

//signals:

public slots:
    void proccessKey(int i, int j);
    void openMenu();
};

#endif // MAINWINDOW_H
