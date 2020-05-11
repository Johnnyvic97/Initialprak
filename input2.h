#ifndef INPUT2_H
#define INPUT2_H
#include <QPainter>

#include <QGraphicsItem>
#include <QtCore>


class Input2: public QGraphicsItem
{ public:
    Input2();
     QRectF boundingRect() const;
      void paint(QPainter *painter,const QStyleOptionGraphicsItem *option,QWidget *widget);
    QPainter *painter;
};

#endif // INPUT2_H
