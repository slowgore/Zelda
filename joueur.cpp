#include "joueur.h"

Joueur::Joueur():Personnage()
{
    this->setPosX(250);
    this->setPosY(250);
    this->tile = new QGraphicsPixmapItem(QPixmap(":/images/images/zelda_right/10.png").scaled(30,30));
    this->setLifeStatue(6);
}

Joueur::~Joueur(){

}

QGraphicsPixmapItem* Joueur::getTile() const
{
    return this->tile;
}

int* Joueur::getIm_link(){
    return this->image_link;
}

void Joueur::changePixmap(char a)
{
    if (a == 'R')
    {
        this->positionZelda = "R";
        if (this->image_link[0] == 7)
            this->image_link[0] = 1;
        QString im = ":/images/images/zelda_right/" + QString::number(this->image_link[0] * 10) +".png";
        this->image_link[0]++;
        this->tile->setPixmap(QPixmap(im).scaled(30,30));
    }

    if (a == 'L')
    {
        this->positionZelda = "L";
        if (this->image_link[1] == 7)
            this->image_link[1] = 1;
        QString im = ":/images/images/zelda_left/" + QString::number(this->image_link[1] * 10) +".png";
        this->image_link[1]++;
        this->tile->setPixmap(QPixmap(im).scaled(30,30));
    }

    if (a == 'D')
    {
        this->positionZelda = "D";
        if (this->image_link[2] == 7)
            this->image_link[2] = 1;
        QString im = ":/images/images/zelda_down/" + QString::number(this->image_link[2] * 10) +".png";
        this->image_link[2]++;
        this->tile->setPixmap(QPixmap(im).scaled(30,30));
    }

    if (a == 'U')
    {
        this->positionZelda = "U";
        if (this->image_link[3] == 7)
            this->image_link[3] = 1;
        QString im = ":/images/images/zelda_up/" + QString::number(this->image_link[3] * 10) +".png";
        this->image_link[3]++;
        this->tile->setPixmap(QPixmap(im).scaled(30,30));
    }
}

void Joueur::setTileEpee(QString position)
{
    QString s = QString::number(this->number);
           if(position == "R"){ //si il y a une attaque epee a droite
               if (this->image_Epee[0] == 7)
                   this->image_Epee[0] = 0;
               QString im = ":/images/images/attaqueepee/right" + QString::number(this->image_Epee[0]) +".png";
               this->image_Epee[0]++;
               this->tile->setPixmap(QPixmap(im).scaled(30,30));

           }
           if(position == "L"){ //si il y a une attaque epee a gauche
               if (this->image_Epee[1] == 7)
                   this->image_Epee[1] = 0;
               QString im = ":/images/images/attaqueepee/left" + QString::number(this->image_Epee[1]) +".png";
               this->image_Epee[1]++;
               this->tile->setPixmap(QPixmap(im).scaled(30,30));

           }
           if(position == "D"){ //si il y a une attaque epee en bas
               if (this->image_Epee[2] == 7)
                   this->image_Epee[2] = 0;
               QString im = ":/images/images/attaqueepee/down" + QString::number(this->image_Epee[2]) +".png";
               this->image_Epee[2]++;
               this->tile->setPixmap(QPixmap(im).scaled(30,30));

           }
           if(position == "U"){ //si il y a une attaque epee en haut
               if (this->image_Epee[3] == 7)
                   this->image_Epee[3] = 0;
               QString im = ":/images/images/attaqueepee/up" + QString::number(this->image_Epee[3]) +".png";
               this->image_Epee[3]++;
               this->tile->setPixmap(QPixmap(im).scaled(30,30));
           }
}

void Joueur::setTileArc(QString position){
    QString s = QString::number(this->number);
           if(position == "R"){ //si il y a une attaque d'arc a droite
               if (this->image_Epee[0] == 7)
                   this->image_Epee[0] = 0;
               QString im = ":/images/images/arc/right" + QString::number(this->image_Epee[0]) +".png";
               this->image_Epee[0]++;
               this->tile->setPixmap(QPixmap(im).scaled(30,30));

           }
           if(position == "L"){ //si il y a une attaque d'arc a gauche
               if (this->image_Epee[1] == 7)
                   this->image_Epee[1] = 0;
               QString im = ":/images/images/arc/left" + QString::number(this->image_Epee[1]) +".png";
               this->image_Epee[1]++;
               this->tile->setPixmap(QPixmap(im).scaled(30,30));

           }
           if(position == "D"){ //si il y a une attaque d'arc en bas
               if (this->image_Epee[2] == 7)
                   this->image_Epee[2] = 0;
               QString im = ":/images/images/arc/down" + QString::number(this->image_Epee[2]) +".png";
               this->image_Epee[2]++;
               this->tile->setPixmap(QPixmap(im).scaled(30,30));

           }
           if(position == "U"){ //si il y a une attaque d'arc en haut
               if (this->image_Epee[3] == 7)
                   this->image_Epee[3] = 0;
               QString im = ":/images/images/arc/up" + QString::number(this->image_Epee[3]) +".png";
               this->image_Epee[3]++;
               this->tile->setPixmap(QPixmap(im).scaled(30,30));
           }
}
