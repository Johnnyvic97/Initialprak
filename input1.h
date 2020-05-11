#ifndef INPUT1_H
#define INPUT1_H
#include <QPainter>

#include <QGraphicsItem>
#include <QtCore>


class Input1:public QGraphicsItem
{
public:
    Input1();
    QRectF boundingRect() const;
     void paint(QPainter *painter,const QStyleOptionGraphicsItem *option,QWidget *widget);
private:
    QPainter *painter;

};
//class Input2: public QGraphicsItem
//{ public:
//    Input2();
//     QRectF boundingRect() const;
//      void paint(QPainter *painter,const QStyleOptionGraphicsItem *option,QWidget *widget);
//    QPainter *painter;
//};

//class Output:public QGraphicsItem
//{
//public:
//    Output();
//    QRectF boundingRect() const;
//     void paint(QPainter *painter,const QStyleOptionGraphicsItem *option,QWidget *widget);
//   QPainter *painter;

//};

#endif // MYNODES_H
