#include "personnage.h"

Personnage::Personnage()
{
    this->posX=250;
    this->posY=250;
}

void Personnage::setPosX(int i)
{
    if ((i + this->posX) > (-20) && (i + this->posX) < 1430)
        this->posX = i+this->posX;
}

void Personnage::setPosY(int j)
{
    if ((j + this->posY) > (-20) && (j + this->posY) < 950)
        this->posY = j+this->posY;

}

int Personnage::getPosX()
{
    return this->posX;
}

int Personnage::getPosY()
{
    return this->posY;
}

