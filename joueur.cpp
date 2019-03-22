#include "joueur.h"

Joueur::Joueur(int x, int y):Personnage(x, y)
{
    this->tile = QPixmap("C:/Users/marti/OneDrive/Documents/GitHub/Zelda/images/zelda.png").scaled(30,30);
}

QPixmap Joueur::getTile()
{
    return this->tile;
}
