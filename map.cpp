#include "map.h"
#include "game.h"
#include "camera.h"

Map::Map()
{
    this->mapScene = new QGraphicsScene();
    this->cameraView = new Camera();
    this->setFixedSize(500, 500);
    this->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    this->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    musiqueNiv = new QSound(":/musique/musique/niveau_principal.wav");
    musiqueNiv->play();
    setScene(mapScene);
}

void Map::reset()
{
    delete this->mapScene;
    delete this->cameraView;
    this->mapScene = new QGraphicsScene(); // fixe
    this->setFixedSize(500, 500);//la vue aura une taille fixe non modifiable
//    this->setRenderHint(QPainter::Antialiasing, true);//sert a rien je crois
}

void Map::intinialisationScene()
{
    //musiqueNiv = new QMediaPlayer();
    //musiqueNiv->setMedia(QUrl::fromLocalFile(":/musique/musique/niveau_principal.wav"));
    this->affichageMenuEnHaut();
    //musiqueNiv->setVolume(30);
    mapScene->setSceneRect(cameraView->getPosX(), cameraView->getPosY(), 500, 500);

    for (int i = 0; i < 18; i++)
    {
        for (int j = 0; j < 28; j++)
        {
            QPixmap image;
            image = QPixmap(":/images/images/grass.png").scaled(50,50);
            QGraphicsPixmapItem *pGraphicsPixmapItem = new QGraphicsPixmapItem(image);
            pGraphicsPixmapItem->setPixmap(image);
            pGraphicsPixmapItem->setPos(j*50,i*50);
            pGraphicsPixmapItem->setZValue(0); // on affecte au fond baige la valeur z=0
            this->mapScene->addItem(pGraphicsPixmapItem);
        }
    }

    setScene(mapScene);
}

void Map::keyPressEvent(QKeyEvent *event)
{
    switch (event->key())
    {
        case Qt::Key_Right:
        {
            this->cameraView->setPosX(100);
            break;
        }

        case Qt::Key_Left:
        {
            this->cameraView->setPosX(-100);
            break;
        }

        default:
        {
            break;
        }
    }
}

void Map::affichageMenuEnHaut()
{
    QGraphicsRectItem *rectangleDuHaut = new QGraphicsRectItem(cameraView->getPosX(), cameraView->getPosY(),100,100);
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

QGraphicsScene* Map::getMapScene()
{
    return mapScene;
}

Camera* Map::getCameraView()
{
    return cameraView;
}
