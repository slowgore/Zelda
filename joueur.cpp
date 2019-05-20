#include "joueur.h"

Joueur::Joueur():Personnage()
{
    this->setPosX(0);
    this->setPosY(0);
    this->tile = new QGraphicsPixmapItem(QPixmap(":/images/images/zelda_right/10.png").scaled(30,30));
    this->setLifeStatue(6);
}

Joueur::~Joueur(){

}

QGraphicsPixmapItem* Joueur::getTile() const
{
    return this->tile;
}

int* Joueur::getIm_link(){
    return this->image_link;
}

