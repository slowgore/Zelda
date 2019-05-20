#include "menuitem.h"

MenuItem::MenuItem(int vie)
{
    rectangleDuHaut = new QGraphicsRectItem(0, 0, 100,70);
    for (int i = 0; i < vie; i++)
    {
        hearts.push_back(new QGraphicsPixmapItem(QPixmap(":/images/images/zelda.png").scaled(20,20)));
    }
    rectangleDuHaut->setBrush(QColor(255,255,255));
    //rectangleDuHaut->setPen(Qt::NoPen);
    rectangleDuHaut->setOpacity(0.5);
}

QGraphicsRectItem* MenuItem::getRect(){
    return this->rectangleDuHaut;
}

QList<QGraphicsPixmapItem*> *MenuItem::getHearts(){
    return &this->hearts;
}
