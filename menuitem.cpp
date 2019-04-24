#include "menuitem.h"

MenuItem::MenuItem(int vie)
{
    rectangleDuHaut = new QGraphicsRectItem(0, 0, 500,70);
    for (int i = 0; i < vie; i++)
    {
        hearts.append(new QGraphicsPixmapItem(QPixmap(":/images/images/zelda.png").scaled(20,20)));
    }
}

QGraphicsRectItem* MenuItem::getRect(){
    return this->rectangleDuHaut;
}

QList<QGraphicsPixmapItem*> MenuItem::getHearts(){
    return this->hearts;
}

