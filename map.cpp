#include "map.h"
#include "game.h"

Map::Map()
{

    this->mapScene = new QGraphicsScene();
    this->setFixedSize(1400, 900);
    setScene(mapScene);

}

void Map::intinialisationScene(){
    qDebug ()<< "test0";
    musiqueNiv = new QMediaPlayer();
    musiqueNiv->setMedia(QUrl::fromLocalFile("../Zelda-2019/musique/niveau1.wav"));
    musiqueNiv->play();
    qDebug ()<< "test";
    mapScene->setSceneRect(0,0,1400,900);
    setScene(mapScene);

}

void Map::affichageMenuEnHaut()
{
    QGraphicsRectItem *rectangleDuHaut = new QGraphicsRectItem(0,0,500,500);
    rectangleDuHaut->setBrush(QBrush(Qt::white));
    rectangleDuHaut->setZValue(5);
    this->mapScene->addItem(rectangleDuHaut);
}

void Map::background(){

}
