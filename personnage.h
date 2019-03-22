#ifndef PERSONNAGE_H
#define PERSONNAGE_H

#include <vector>
#include <QGraphicsPixmapItem>
#include <QPixmap>

using namespace std;

class Personnage
{
private:
    int posX;
    int posY;

public:
    Personnage(int, int);
    void setPosX(int i);
    void setPosY(int j);
    int getPosX();
    int getPosY();
};

#endif // PERSONNAGE_H
