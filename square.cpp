//#include "square.h"
//#include <QWidget>
//#include <QPainter>
//#include <QtGui>

//Square::Square(QWidget *parent) : QWidget(parent)
//{
//    QWidget *topFiller = new QWidget();
//    topFiller->setSizePolicy(QSizePolicy::Expanding ,QSizePolicy::Expanding);

//    QWidget *bottomFiller = new QWidget();
//    bottomFiller->setSizePolicy(QSizePolicy::Expanding ,QSizePolicy::Expanding);

//    QVBoxLayout *layout = new QVBoxLayout();
//    layout->addWidget(topFiller);
//    layout->addWidget(bottomFiller);
//}

//void Square::paintEvent(QPaintEvent *e)
//{
//    QRectF rectangle(10.0, 20.0, 80.0, 60.0);
//    QPainter p;
//    p.begin(this);
//    p.drawRect(rectangle);
//    p.brush(QBrush("#c56c00"));
//    p.end();
//}

//Square::~Square()
//{
//    //    delete nut;
//}
