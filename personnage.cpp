#include "personnage.h"

Personnage::Personnage(int x,int y)
{
    this->posX = x;
    this->posY = y;
}

//je comprend pas pourquoi i + this->posX ????
void Personnage::setPosX(int i)
{
    if ((i + this->posX) > 0 && (i + this->posX) < 1400)
        this->posX = i+this->posX;
}

void Personnage::setPosY(int j)
{
    if ((j+this->posY) > 0 && (j+this->posY) < 900)
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

