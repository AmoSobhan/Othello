#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QGridLayout>
#include <QLabel>
#include <QMainWindow>
#include <QPaintEvent>
#include <QPushButton>
#include <QTextEdit>

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    QPushButton *nuts[8][8];
    QGridLayout *btns;
    QPushButton *exit;
    QPushButton *newGame;
    QLabel *playerName;
    QLabel *cpuName;
    QLabel *playerValue;
    QLabel *cpuValue;
protected:
    void paintEvent(QPaintEvent * e);

//signals:

//public slots:
//    void openMenu();
};

#endif // MAINWINDOW_H
