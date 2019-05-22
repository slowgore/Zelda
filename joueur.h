#ifndef JOUEUR_H
#define JOUEUR_H

#include <QPixmap>

#include "personnage.h"
#include "epee.h"

class Joueur : public Personnage
{
private:
    QGraphicsPixmapItem *tile;
    QGraphicsPixmapItem *tileEpee;
    QGraphicsPixmapItem *invincible;
    int image_link[4] = {2,1,1,1};
    int image_Epee[4] = {1,1,1,1};
    int image_invincible[4] = {1,1,1,1};

    Epee *epee;

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
    Epee *getSword() const;
    void setSword(Epee *value);

    QString positionZelda;
    int number;  //position image epee

};

#endif // JOUEUR_H
