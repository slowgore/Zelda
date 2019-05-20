#include "hostile.h"

Hostile::Hostile(int posX, int posY)
{
    this->setPosX(posX);
    this->setPosY(posY);

    this->posXinitiale = posX;
    this->posYinitiale = posY;

    this->tile = new QGraphicsPixmapItem(QPixmap(":/images/images/monstre_1/r_1.png").scaled(30,30));
    this->tile->setPos(posX, posY);
    this->tile->setZValue(4);
}

QGraphicsPixmapItem* Hostile::getTile()
{
    return this->tile;
}

int Hostile::getPosXinitiale() const
{
    return posXinitiale;
}
int Hostile::getPosYinitiale() const
{
    return posYinitiale;
}

void Hostile::setPosXinitiale(int value)
{
    posXinitiale = value;
    setPosX(value);
}

void Hostile::setPosYinitiale(int value)
{
    posYinitiale = value;
    setPosY(value);
}

void Hostile::changePixmap(char a)
{
    if (a == 'R')
    {
        this->directionMonstre = "R";
        if (this->im_ennemi[0] == 3)
            this->im_ennemi[0] = 1;
        QString im = ":/images/images/monstre_1/r_" + QString::number(this->im_ennemi[0]) +".png";
        this->im_ennemi[0]++;
        this->tile->setPixmap(QPixmap(im).scaled(30,30));
    }

    if (a == 'L')
    {
        this->directionMonstre = "L";
        if (this->im_ennemi[1] == 3)
            this->im_ennemi[1] = 1;
        QString im = ":/images/images/monstre_1/l_" + QString::number(this->im_ennemi[1]) +".png";
        this->im_ennemi[1]++;
        this->tile->setPixmap(QPixmap(im).scaled(30,30));
    }

    if (a == 'D')
    {
        this->directionMonstre = "D";
        if (this->im_ennemi[2] == 3)
            this->im_ennemi[2] = 1;
        QString im = ":/images/images/monstre_1/d_" + QString::number(this->im_ennemi[2]) +".png";
        this->im_ennemi[2]++;
        this->tile->setPixmap(QPixmap(im).scaled(30,30));
    }

    if (a == 'U')
    {
        this->directionMonstre = "U";
        if (this->im_ennemi[3] == 3)
            this->im_ennemi[3] = 1;
        QString im = ":/images/images/monstre_1/u_" + QString::number(this->im_ennemi[3]) +".png";
        this->im_ennemi[3]++;
        this->tile->setPixmap(QPixmap(im).scaled(30,30));
    }
}
