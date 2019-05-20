#ifndef JOUEUR_H
#define JOUEUR_H

#include <QPixmap>

#include "personnage.h"
#include "epee.h"

class Joueur : public Personnage
{
private:
    QGraphicsPixmapItem *tile;
    int image_link[4] = {1,1,1,1};
    int image_Epee[4] = {1,1,1,1};

    Epee *epee;

public:
    Joueur();
    ~Joueur();
    QGraphicsPixmapItem* getTile() const;
    void changePixmap(char a);
    int* getIm_link();
    void setTitle(QGraphicsPixmapItem *tile);
    void setTileEpee(QString position);
    Epee *getSword() const;
    void setSword(Epee *value);

    QString positionZelda;
    int number;  //position image epee

};

#endif // JOUEUR_H
