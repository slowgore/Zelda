#ifndef JOUEUR_H
#define JOUEUR_H

#include <QPixmap>

#include "personnage.h"

class Joueur : public Personnage
{
private:
    QGraphicsPixmapItem *tile;
    QGraphicsPixmapItem *tileEpee;
    QGraphicsPixmapItem *invincible;
    int image_link[4] = {2,1,1,1};
    int image_Epee[4] = {1,1,1,1};
    int image_invincible[4] = {1,1,1,1};

public:
    Joueur();
    ~Joueur();
    QGraphicsPixmapItem* getTile() const;
    void changePixmap(char a, int invincible);
    int* getIm_link();
    void setTitle(QGraphicsPixmapItem *tile);
    void setTileEpee(QString position);
    void setTileArc(QString position);
    void setTileInvicibility(QString position);
    QString positionZelda;

};

#endif // JOUEUR_H
