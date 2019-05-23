#ifndef HOSTILE_H
#define HOSTILE_H


#include <QPixmap>
#include <QDebug>

#include "personnage.h"
#include "boulefeu.h"

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

    void changePosFunc(int nb);
    void changePixmap(char a);

    QString getDirection();

private:
    QGraphicsPixmapItem *tile;
    int posXinitiale;
    int posYinitiale;
    QString directionMonstre;
    int im_ennemi[4] = {2,1,1,1};
};

#endif // HOSTILE_H
