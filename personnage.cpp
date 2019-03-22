#include "personnage.h"

Personnage::Personnage()
{
    this->posX=0;
    this->posY=0;
}

void Personnage::setPosX(int i)
{
    if ((i+this->posX)<0)
        return;
    else if ((i+this->posX)>1400)
        return;
    else
        this->posX = i+this->posX;
}

void Personnage::setPosY(int j)
{
    if ((j+this->posY)<0)
        return;
    else if ((j+this->posY)>900)
        return;
    else
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

