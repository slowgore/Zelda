#include "map.h"
#include "game.h"
#include "camera.h"

Map::Map()
{
    this->mapScene = new QGraphicsScene();
    this->cameraView = new Camera();
    this->setFixedSize(1400, 900);
    setScene(mapScene);
}

void Map::intinialisationScene()
{
    //musiqueNiv = new QMediaPlayer();
    //musiqueNiv->setMedia(QUrl::fromLocalFile(":/musique/musique/niveau_principal.wav"));
    musiqueNiv = new QSound(":/musique/musique/niveau_principal.wav");
    musiqueNiv->play();
    //musiqueNiv->setVolume(30);
    mapScene->setSceneRect(0,0,1400,900);

    mapScene->setBackgroundBrush(QBrush(QImage(":/images/images/background1.jpg"))); // a changer une fois que la carte sera créé
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

void Map::afficherPersonnage(Joueur *joueur)
{
    QGraphicsPixmapItem *apparencePersonnage =  new QGraphicsPixmapItem(joueur->getTile());
    apparencePersonnage->setPos(joueur->getPosX(),joueur->getPosY());
    apparencePersonnage->setZValue(100);//pour etre sur
    this->mapScene->addItem(apparencePersonnage);
}
