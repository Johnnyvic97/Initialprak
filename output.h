#ifndef OUTPUT_H
#define OUTPUT_H
#include <QPainter>

#include <QGraphicsItem>
#include <QtCore>


class Output:public QGraphicsItem
{
public:
    Output();
    QRectF boundingRect() const;
     void paint(QPainter *painter,const QStyleOptionGraphicsItem *option,QWidget *widget);
   QPainter *painter;

};

#endif // OUTPUT_H
