#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPaintEvent>
#include <QPushButton>

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);

private:
    QPushButton *nuts[8][8];
protected:
    void paintEvent(QPaintEvent * e);

//signals:

//public slots:
};

#endif // MAINWINDOW_H
