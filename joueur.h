#ifndef JOUEUR_H
#define JOUEUR_H

#include <QPixmap>

#include "personnage.h"

class Joueur : public Personnage
{
private:
    QGraphicsPixmapItem *tile;

public:
    Joueur();
    ~Joueur();
    QGraphicsPixmapItem* getTile() const;
};

#endif // JOUEUR_H
