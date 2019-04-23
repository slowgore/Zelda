#include "personnage.h"
#include <QtGui>

Personnage::Personnage(QGraphicsItem *parent):QGraphicsItem (parent)
{
    this->posX=250;
    this->posY=250;
}

QRectF Personnage::boundingRect() const {
    return QRectF(0,0,30,30);
}

void Personnage::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget){
    painter->drawPixmap(200,200,30,30,QPixmap(":/images/images/zelda.png"));
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

