#include "mysquare.h"
#include <QDebug>

MySquare::MySquare()
{
    setFlag(ItemIsMovable);
}

QRectF MySquare::boundingRect() const
{
    return QRectF(50,50,50,50);
}





void MySquare::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
QRectF rect= boundingRect()  ;

painter->drawRect( rect);
}

//MyNodes::MyNodes()
//{
//    QRectF topcircle = QRectF(40,50,10,10);
//    QPainter *painter;
//    painter->drawRect(topcircle);

//    QRectF botcircle = QRectF(40,100,10,10);
//    painter->drawRect(botcircle);


//    QRectF rightcircle = QRectF(40,100,10,10);
//    painter->drawRect(rightcircle);


//}



//QPainter *inputcircle;
//nputcircle->drawEllipse(0,0,10,10);






//void MySquare::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
//{
//    update();
//}


