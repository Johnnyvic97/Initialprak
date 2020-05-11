#ifndef MYSQUARE_H
#define MYSQUARE_H
#include <QPainter>

#include <QGraphicsItem>
#include <QtCore>


class MySquare: public QGraphicsItem
{
public:
    MySquare();
  QRectF boundingRect() const ;

    void paint(QPainter *painter,const QStyleOptionGraphicsItem *option,QWidget *widget);
private slots:

protected :

};

#endif // MYSQUARE_H
