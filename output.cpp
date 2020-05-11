#include "output.h"

Output::Output()
{
   setFlag(ItemIsMovable);
}
QRectF Output::boundingRect() const
{
    return QRectF(100,50,10,10);
}

void Output::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QRectF outputcircle = QRectF(100,50,10,10);
    painter->drawRect(outputcircle);

}
