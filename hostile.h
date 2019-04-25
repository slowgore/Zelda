#ifndef HOSTILE_H
#define HOSTILE_H


#include <QPixmap>
#include <QDebug>

#include "personnage.h"

class Hostile : public Personnage
{
public:
    Hostile(int posX, int posY);
    QPixmap getTile(); // renvoie un QPixmap
    void setTilePosition(); // Donne la position de la tile

    int getPosXinitiale() const;
    void setPosXinitiale(int value);

    int getPosYinitiale() const;
    void setPosYinitiale(int value);

private:
    QPixmap tile;
    int posXinitiale;
    int posYinitiale;
};

#endif // HOSTILE_H
