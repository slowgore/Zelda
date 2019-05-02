#ifndef HOSTILE_H
#define HOSTILE_H


#include <QPixmap>
#include <QDebug>

#include "personnage.h"

class Hostile : public Personnage
{
public:
    Hostile(int posX, int posY);
    QGraphicsPixmapItem* getTile();
    void setTilePosition();

    int getPosXinitiale() const;
    void setPosXinitiale(int value);

    int getPosYinitiale() const;
    void setPosYinitiale(int value);

private:
    QGraphicsPixmapItem *tile;
    int posXinitiale;
    int posYinitiale;
};

#endif // HOSTILE_H
