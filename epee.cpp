#include "epee.h"

Epee::Epee()
{

}

QPixmap Epee::getTile() const
{
    return tile;
}

void Epee::setTile(const QPixmap &value)
{
    tile = value;
}

