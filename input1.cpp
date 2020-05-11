#include "input1.h"

Input1::Input1()
{
   setFlag(ItemIsMovable);
}

QRectF Input1::boundingRect() const
{
    return QRectF(40,50,10,10);
}

void Input1::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QRectF topcircle = QRectF(40,50,10,10);
        painter->drawRect(topcircle);

}

//INPUT 2
//Input2::Input2()
//{
//   setFlag(ItemIsMovable);
//}
//QRectF Input2::boundingRect() const
//{
//    QRectF(40,90,10,10);
//}

//void Input2::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
//{
//    QRectF botcircle = QRectF(40,90,10,10);
//    painter->drawRect(botcircle);

//}

//OUTPUT
//Output::Output()
//{
//   setFlag(ItemIsMovable);
//}
//QRectF Output::boundingRect() const
//{
//    QRectF(100,50,10,10);
//}

//void Output::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
//{
//    QRectF outputcircle = QRectF(100,50,10,10);
//    painter->drawRect(outputcircle);

//}
