#ifndef PERSONNAGE_H
#define PERSONNAGE_H

#include <vector>
#include <QGraphicsItem>
#include <QPixmap>

using namespace std;

class Personnage : public QGraphicsItem
{
private:
    int posX;
    int posY;
    int life;

protected:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    QRectF boundingRect() const;

public:
    Personnage(QGraphicsItem* parent = NULL);
    void setPosX(int i);
    void setPosY(int j);
    int getPosX() const;
    int getPosY() const;
    int getLifeStatue();
    void setLifeStatue(int life);
};

#endif // PERSONNAGE_H
