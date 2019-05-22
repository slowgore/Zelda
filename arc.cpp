#include "arc.h"

Arc::Arc(QString direction)
{
    this->direction = direction;
    if (direction == 'R')
        this->tile = new QGraphicsPixmapItem(QPixmap(":/images/images/fleches/right.png"));
    if (direction == 'L')
        this->tile = new QGraphicsPixmapItem(QPixmap(":/images/images/fleches/left.png"));
    if (direction == 'D')
        this->tile = new QGraphicsPixmapItem(QPixmap(":/images/images/fleches/down.png"));
    if (direction == 'U')
        this->tile = new QGraphicsPixmapItem(QPixmap(":/images/images/fleches/up.png"));
    this->timer =  new QTimer(this);
    this->monstre = nullptr;
    timer->connect(timer, SIGNAL(timeout()), this, SLOT(updatefleche()));
    timer->start(1);
}

QGraphicsPixmapItem* Arc::getTileFleche()
{
    return tile;
}

void Arc::setTileFleche(QGraphicsPixmapItem *value)
{
    tile = value;
}

QGraphicsItem* Arc::getCollison()
{
    return monstre;
}

void Arc::updatefleche()
{
    if (direction == 'R')
        tile->setX(tile->x() + 1);
    if (direction == 'L')
        tile->setX(tile->x() - 1);
    if (direction == 'D')
        tile->setY(tile->y() + 1);
    if (direction == 'U')
        tile->setY(tile->y() - 1);

    collision = this->tile->collidingItems();

    for (QGraphicsItem *a:collision)
    {
        if (a->zValue() == 4.0)
        {
            a->setZValue(-1);
            monstre = a;
            this->tile->setZValue(-1);
            timer->stop();
        }
    }
}

Arc::~Arc(){}
