#include "input2.h"

Input2::Input2()
{
   setFlag(ItemIsMovable);
}
QRectF Input2::boundingRect() const
{
    return QRectF(40,90,10,10);
}

void Input2::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QRectF botcircle = QRectF(40,90,10,10);
    painter->drawRect(botcircle);

}
