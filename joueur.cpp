#include "joueur.h"

Joueur::Joueur():Personnage (0,0)
{
    this->tile = QPixmap("C:/Users/marti/Documents/GitHub/Zelda/images/zelda.png").scaled(30,30);
}

QPixmap Joueur::getTile()
{
    return this->tile;
}
