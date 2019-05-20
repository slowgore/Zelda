#include "joueur.h"

Joueur::Joueur():Personnage()
{
    this->setPosX(0);
    this->setPosY(0);
    this->tile = new QGraphicsPixmapItem(QPixmap(":/images/images/zelda_right/10.png").scaled(30,30));
    this->setLifeStatue(6);
}

Joueur::~Joueur(){

}

QGraphicsPixmapItem* Joueur::getTile() const
{
    return this->tile;
}

int* Joueur::getIm_link(){
    return this->image_link;
}

void Joueur::changePixmap(char a)
{
    if (a == 'R')
    {
        if (this->image_link[0] == 6)
            this->image_link[0] = 1;
        QString im = ":/images/images/zelda_right/" + QString::number(this->image_link[0] * 10) +".png";
        this->image_link[0]++;
        this->tile->setPixmap(QPixmap(im).scaled(30,30));
    }

    if (a == 'L')
    {
        if (this->image_link[1] == 6)
            this->image_link[1] = 1;
        QString im = ":/images/images/zelda_left/" + QString::number(this->image_link[1] * 10) +".png";
        this->image_link[1]++;
        this->tile->setPixmap(QPixmap(im).scaled(30,30));
    }

    if (a == 'D')
    {
        if (this->image_link[2] == 6)
            this->image_link[2] = 1;
        QString im = ":/images/images/zelda_down/" + QString::number(this->image_link[2] * 10) +".png";
        this->image_link[2]++;
        this->tile->setPixmap(QPixmap(im).scaled(30,30));
    }

    if (a == 'U')
    {
        if (this->image_link[3] == 6)
            this->image_link[3] = 1;
        QString im = ":/images/images/zelda_up/" + QString::number(this->image_link[3] * 10) +".png";
        this->image_link[3]++;
        this->tile->setPixmap(QPixmap(im).scaled(30,30));
    }
}
