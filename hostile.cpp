#include "hostile.h"

Hostile::Hostile(int posX, int posY)
{
    this->setPosX(posX);
    this->setPosY(posY);

    this->posXinitiale =qrand() % ((1000 + 1) - 250) + 250;
    this->posYinitiale = qrand() % ((700 + 1) - 250) + 250;

    this->tile=QPixmap(":/images/images/zelda.png").scaled(30,30);
}



QPixmap Hostile::getTile()
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
