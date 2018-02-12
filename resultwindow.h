#ifndef RESULTWINDOW_H
#define RESULTWINDOW_H

#include "Othello.h"

#include <QLabel>
#include <QMainWindow>
#include <QCoreApplication>
#include <QPushButton>

class Othello;

class ResultWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit ResultWindow(QWidget *parent = 0);
    ~ResultWindow();

private:
    QPushButton *newGame;
    QPushButton *exit;
    QLabel *result;
    Othello *menuR;

signals:

public slots:
    void openMenuR();

};

#endif // RESULTWINDOW_H
