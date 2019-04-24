#include "map.h"

Map::Map()
{
    this->mapScene = new QGraphicsScene();
    this->cameraView = new Camera();
    this->zelda = new Joueur();
    this->niveaux = new Niveaux();
    this->setFixedSize(500, 500);
    this->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    this->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    musiqueNiv = new QSound(":/musique/musique/niveau_principal.wav");
    musiqueNiv->play();
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
    QString im = "";
    float z = 0.0;

    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 30; j++)
        {
            if (niveaux->carte1[i][j] == 1)
            {
                im = ":/images/images/grass.png";
            }
            else if (niveaux->carte1[i][j] == 2) {
                im = ":/images/images/sand.png";
            }
            else if (niveaux->carte1[i][j] == 3) {
                im = ":/images/images/reverse_top_corner_left_sand.png";
            }
            else if (niveaux->carte1[i][j] == 4) {
                im = ":/images/images/reverse_botom_corner_left_sand.png";
            }
            else if (niveaux->carte1[i][j] == 5) {
                im = ":/images/images/reverse_botom_corner_right_sand.png";
            }
            else if (niveaux->carte1[i][j] == 6) {
                im = ":/images/images/reverse_top_corner_right_sand.png";
            }
            else if (niveaux->carte1[i][j] == 7) {
                im = ":/images/images/top_corner_left_sand.png";
            }
            else if (niveaux->carte1[i][j] == 8) {
                im = ":/images/images/botom_corner_right_sand.png";
            }
            else if (niveaux->carte1[i][j] == 9) {
                im = ":/images/images/botom_corner_left_sand.png";
            }
            else if (niveaux->carte1[i][j] == 10) {
                im = ":/images/images/top_corner_right_sand.png";
            }
            else if (niveaux->carte1[i][j] == 11) {
                im = ":/images/images/right_sand.png";
            }
            else if (niveaux->carte1[i][j] == 12) {
                im = ":/images/images/botom_sand.png";
            }
            else if (niveaux->carte1[i][j] == 13) {
                im = ":/images/images/left_sand.png";
            }
            else if (niveaux->carte1[i][j] == 14) {
                im = ":/images/images/top_sand.png";
            }
            else if (niveaux->carte1[i][j] == 20) {
                im = ":/images/images/roche.png";
            }
            else if (niveaux->carte1[i][j] == 30) {
                im = ":/images/images/arbre.png";
                z = 2.0;
            }
            else
            {
                im = ":/images/images/grass.png";
            }
            QPixmap image;
            image = QPixmap(im).scaled(50,50);
            QGraphicsPixmapItem *fond = new QGraphicsPixmapItem(image);
            fond->setPixmap(image);
            fond->setPos(j*50,i*50);
            fond->setZValue(z); // on affecte au fond baige la valeur z=0
            z = 0.0;
            this->mapScene->addItem(fond);
        }
    }
    this->zelda->getTile()->setPos((this->zelda->getPosX()), (this->zelda->getPosY()));
    this->zelda->getTile()->setZValue(5);
    this->mapScene->addItem(this->zelda->getTile());
    QList<QGraphicsItem*> item = mapScene->items();
    setScene(mapScene);
}

void Map::update(){
    mapScene->setSceneRect(cameraView->getPosX(), cameraView->getPosY(), 500, 500);
    mapScene->items()[1]->setX(cameraView->getPosX());
    mapScene->items()[1]->setY(cameraView->getPosY());
}

void Map::keyPressEvent(QKeyEvent *event)
{
    QList<QGraphicsItem*> item;
    bool coli = false;
    switch (event->key())
    {

    case Qt::Key_Right:
    {
        this->zelda->getTile()->setX(this->zelda->getPosX() + 10);
        item = mapScene->collidingItems(this->zelda->getTile());
        for (QGraphicsItem *a : item)
        {
            if (a->zValue() == 2.0)
                coli = true;
        }

        if (this->zelda->getPosX() == this->cameraView->getPosX() + 250) {
            if (!coli) {
                this->zelda->setPosX(10);
                if (this->cameraView->getPosX() < 1000)
                    this->cameraView->setPosX(10);
            }

        } else {
            if(this->zelda->getPosX() < 1430)
            {
                if (!coli)
                {
                    this->zelda->setPosX(10);
                }
            }
        }

        break;
    }

    case Qt::Key_Left:
    {
        this->zelda->getTile()->setX(this->zelda->getPosX() - 10);
        item = mapScene->collidingItems(this->zelda->getTile());
        for (QGraphicsItem *a : item)
        {
            if (a->zValue() == 2.0)
                coli = true;
        }

        if(this->zelda->getPosX() == this->cameraView->getPosX() + 250){
            if (!coli)
            {
                this->zelda->setPosX(-10);
                if (this->cameraView->getPosX() > 0)
                    this->cameraView->setPosX(-10);
            }

        } else {
            if (this->zelda->getPosX() > 50)
            {
                if (!coli)
                {
                    this->zelda->setPosX(-10);
                }
            }
        }

        break;
    }

    case Qt::Key_Down:
    {
        this->zelda->getTile()->setY(this->zelda->getPosY() + 10);
        item = mapScene->collidingItems(this->zelda->getTile());
        for (QGraphicsItem *a : item)
        {
            if (a->zValue() == 2.0)
                coli = true;
        }

        if (this->zelda->getPosY() == this->cameraView->getPosY() + 250) {
            if (!coli)
            {
                this->zelda->setPosY(10);
                if (this->cameraView->getPosY() < 500)
                    this->cameraView->setPosY(10);
            }

        } else {
            if (this->zelda->getPosY() < 920)
            {
                if (!coli)
                {
                    this->zelda->setPosY(10);
                }

            }
        }

        break;
    }

    case Qt::Key_Up:
    {
        this->zelda->getTile()->setY(this->zelda->getPosY() - 10);
        item = mapScene->collidingItems(this->zelda->getTile());
        for (QGraphicsItem *a : item)
        {
            if (a->zValue() == 2.0)
                coli = true;
        }

        if (this->zelda->getPosY() == this->cameraView->getPosY() + 250){
            if (!coli)
            {
                if (this->cameraView->getPosY() > -70)
                    this->cameraView->setPosY(-10);
                this->zelda->setPosY(-10);
            }

        } else {
            if (this->zelda->getPosY() > 50)
            {
                if (!coli)
                {
                    this->zelda->setPosY(-10);
                }

            }
        }

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
    QGraphicsRectItem *rectangleDuHaut = new QGraphicsRectItem(cameraView->getPosX(), cameraView->getPosY(),500,70);
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

