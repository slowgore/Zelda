#include "joueur.h"

Joueur::Joueur():Personnage()
{
    this->setPosX(0);
    this->setPosY(0);
    this->tile = new QGraphicsPixmapItem(QPixmap(":/images/images/zelda.png").scaled(30,30));
    this->setLifeStatue(6);
}

Joueur::~Joueur(){

}

QGraphicsPixmapItem* Joueur::getTile()
{
    return this->tile;
}
