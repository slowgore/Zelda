#include "joueur.h"

Joueur::Joueur()
{
    this->setPosX(0);
    this->setPosY(0);

    this->tile = QPixmap("C:/Users/marti/Documents/GitHub/Zelda/images/zelda.png").scaled(30,30);
}

QPixmap Joueur::getTile()
{
    return this->tile;
}
