#ifndef JOUEUR_H
#define JOUEUR_H

#include <QPixmap>

#include "personnage.h"

class Joueur : public Personnage
{
private:
    QGraphicsPixmapItem *tile;
    int image_link[4] = {1,1,1,1};

public:
    Joueur();
    ~Joueur();
    QGraphicsPixmapItem* getTile() const;
    void changePixmap(char a);
    int* getIm_link();
    void setTitle(QGraphicsPixmapItem *tile);
};

#endif // JOUEUR_H
