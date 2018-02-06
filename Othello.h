#ifndef OTHELLO_H
#define OTHELLO_H

#include <QMainWindow>

namespace Ui {
class Othello;
}

class Othello : public QMainWindow
{
    Q_OBJECT

public:
    explicit Othello(QWidget *parent = 0);
    ~Othello();

private:
    Ui::Othello *ui;
};

#endif // OTHELLO_H
