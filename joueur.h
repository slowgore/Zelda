#ifndef JOUEUR_H
#define JOUEUR_H

#include <QPixmap>

#include "personnage.h"

class Joueur : public Personnage
{
public:
    Joueur();
    QPixmap getTile();

private:
    QPixmap tile;

};

#endif // JOUEUR_H
