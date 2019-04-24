#include "menuitem.h"

MenuItem::MenuItem()
{

}

void MenuItem::affichageMenuEnHaut()
{
    rectangleDuHaut = new QGraphicsRectItem(cameraView->getPosX(), cameraView->getPosY(),500,70);
    rectangleDuHaut->setBrush(QBrush(Qt::black));
    rectangleDuHaut->setZValue(5);

    int l=0;
    int c=0;
    for (int i=0;i<this->zelda->getLifeStatue();i++){

        if(this->zelda->getLifeStatue()<11){
            QPixmap pix = QPixmap(":/images/images/zelda.png").scaled(20,20);
            QGraphicsPixmapItem * heart = new QGraphicsPixmapItem(pix);
            heart->setPos((this->cameraView->getPosX()+15*l),this->cameraView->getPosY()+1+15*c);
            heart->setZValue(10);
            this->mapScene->addItem(heart);
        }
        l++;
        if(l==5){
            c=1;
            l=0;
        }
    }
    this->mapScene->addItem(rectangleDuHaut);
}
