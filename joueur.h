#ifndef JOUEUR_H
#define JOUEUR_H

#include <QPixmap>

#include "personnage.h"

class Joueur : public Personnage {

private:
    QPixmap tile;

public:
    Joueur(int x, int y);
    QPixmap getTile();
};

#endif // JOUEUR_H
