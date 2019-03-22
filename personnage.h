#ifndef PERSONNAGE_H
#define PERSONNAGE_H

#include <vector>
#include <QGraphicsPixmapItem>
#include <QPixmap>

using namespace std;

class Personnage
{
public:
    Personnage();
    void setPosX(int i);
    void setPosY(int j);
    int getPosX();
    int getPosY();

private:
    int posX;
    int posY;



};

#endif // PERSONNAGE_H
