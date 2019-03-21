#include "map.h"
#include "game.h"

Map::Map()
{

    this->mapScene = new QGraphicsScene();
    this->setFixedSize(1400, 900);
    setScene(mapScene);

}

void Map::intinialisationScene(){
    musiqueNiv = new QMediaPlayer();
    musiqueNiv->setMedia(QUrl::fromLocalFile("../Zelda-2019/musique/niveau_principal.wav"));
    musiqueNiv->play();
    mapScene->setSceneRect(0,0,1400,900);

    mapScene->setBackgroundBrush(QBrush(QImage("../Zelda-2019/images/ecran_pricipal2.jpg"))); // a changer une fois que la carte sera créé
    this->affichageMenuEnHaut();
    setScene(mapScene);

}

void Map::affichageMenuEnHaut()
{
    QGraphicsRectItem *rectangleDuHaut = new QGraphicsRectItem(0,0,1400,100);
    rectangleDuHaut->setBrush(QBrush(Qt::black));
    rectangleDuHaut->setZValue(5);
    this->mapScene->addItem(rectangleDuHaut);
}

void Map::background(){

}
