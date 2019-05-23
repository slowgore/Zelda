#include "menuitem.h"

MenuItem::MenuItem(int vie)
{
    rectangleDuHaut = new QGraphicsRectItem(0, 0, 110,70);
    QBrush im;
    im.setTextureImage(QImage(":/images/images/menuCoeur.png").scaled(100,70));
    rectangleDuHaut->setOpacity(1);

    for (int i = 0; i < vie; i++)
    {
        hearts.push_back(new QGraphicsPixmapItem(QPixmap(":/images/images/heart.png").scaled(20,15)));
    }

}

QGraphicsRectItem* MenuItem::getRect(){
    return this->rectangleDuHaut;
}

QList<QGraphicsPixmapItem*> *MenuItem::getHearts(){
    return &this->hearts;
}
