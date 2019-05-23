#include "boulefeu.h"

bouleFeu::bouleFeu(QString direction)
{
    this->tile = new QGraphicsPixmapItem(QPixmap(":/images/images/boule.png"));
    this->tile->setZValue(3.0);
    this->direction = direction;
    this->timer =  new QTimer(this);
    this->timer2 = new QTimer(this);
    this->monstre = nullptr;
    timer->connect(timer, SIGNAL(timeout()), this, SLOT(updateboule()));
    timer2->connect(timer2, SIGNAL(timeout()), this, SLOT(supboule()));
    timer->start(5);
    timer2->start(1000);
}

QGraphicsItem* bouleFeu::getCollison()
{
    return monstre;
}

void bouleFeu::updateboule()
{
    if (direction == 'R')
        tile->setX(tile->x() + 1);
    if (direction == 'L')
        tile->setX(tile->x() - 1);
    if (direction == 'D')
        tile->setY(tile->y() + 1);
    if (direction == 'U')
        tile->setY(tile->y() - 1);
}

QGraphicsPixmapItem* bouleFeu::getTile()
{
    return tile;
}

void bouleFeu::supboule()
{
    this->tile->setZValue(-1);
    this->~bouleFeu();
}

bouleFeu::~bouleFeu(){}
