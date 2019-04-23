#include "joueur.h"

Joueur::Joueur():Personnage()
{
    this->setPosX(200);
    this->setPosY(200);
    this->tile = QPixmap(":/images/images/zelda.png").scaled(30,30);
}

QPixmap Joueur::getTile()
{
    return this->tile;
}
