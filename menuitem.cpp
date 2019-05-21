#include "menuitem.h"

MenuItem::MenuItem(int vie)
{
    rectangleDuHaut = new QGraphicsRectItem(0, 0, 100,70);
    QBrush im;
    im.setTextureImage(QImage(":/images/images/menuCoeur.png").scaled(100,70));
    //rectangleDuHaut->setBrush(QPixmap(":/images/images/menuCoeur.png").scaled(100,70));
    rectangleDuHaut->setOpacity(0.5);
    //rectangleDuHaut->setBrush(im);

    for (int i = 0; i < vie; i++)
    {
        hearts.push_back(new QGraphicsPixmapItem(QPixmap(":/images/images/zelda.png").scaled(20,20)));
    }

}



QGraphicsRectItem* MenuItem::getRect(){
    return this->rectangleDuHaut;
}

QList<QGraphicsPixmapItem*> *MenuItem::getHearts(){
    return &this->hearts;
}
