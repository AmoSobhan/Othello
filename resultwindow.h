#ifndef RESULTWINDOW_H
#define RESULTWINDOW_H

#include <QLabel>
#include <QMainWindow>
#include <QPushButton>

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

signals:

public slots:

};

#endif // RESULTWINDOW_H
