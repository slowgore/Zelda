#include "arc.h"

Arc::Arc()
{

}

QPixmap Arc::getTileFleche() const
{
    return tile;
}

void Arc::setTileFleche(const QPixmap &value)
{
    tile = value;
}
