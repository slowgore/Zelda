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
    QString im = "";
    int z = 0;

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
                z = 1;
            }
            else if (niveaux->carte1[i][j] == 30) {
                im = ":/images/images/arbre.png";
                z = 1;
            }
            else
            {
                im = ":/images/images/grass.png";
            }
            QPixmap image;
            image = QPixmap(im).scaled(50,50);
            QGraphicsPixmapItem *fond = new QGraphicsPixmapItem(image);
            QGraphicsPixmapItem *perso = new QGraphicsPixmapItem(this->zelda->getTile());
            fond->setPixmap(image);
            perso->setPixmap(this->zelda->getTile());
            fond->setPos(j*50,i*50);
            perso->setPos((this->zelda->getPosX()), (this->zelda->getPosY()));
            fond->setZValue(z); // on affecte au fond baige la valeur z=0
            perso->setZValue(1);
            this->mapScene->addItem(fond);
            this->mapScene->addItem(perso);
            //this->view->afficherPersonnage(this->getModel()->getZelda());

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
        if ((this->cameraView->getPosX()+250) <= this->zelda->getPosX()) {
            if (this->cameraView->getPosX() < 1000)
                this->cameraView->setPosX(10);
            if(this->zelda->getPosX() < 1430)
                this->zelda->setPosX(10);
            break;
        }
        if (this->zelda->getPosX() != this->cameraView->getPosX() ) {
            if(this->zelda->getPosX() < 1430)
                this->zelda->setPosX(10);
            break;
        }

        break;
    }

    case Qt::Key_Left:
    {
        if(this->zelda->getPosX() <= (this->cameraView->getPosX()+250)){
            if (this->cameraView->getPosX() > 0 && (this->zelda->getPosX() > 0))
                this->cameraView->setPosX(-10);
            if (this->zelda->getPosX() > 50)
                this->zelda->setPosX(-10);
            break;
        }
        if (this->zelda->getPosX() != this->cameraView->getPosX()) {
            if (this->zelda->getPosX() > 50)
                this->zelda->setPosX(-10);
            break;
        }

        break;
    }

    case Qt::Key_Down:
    {
        if ((this->cameraView->getPosY()+180) <= this->zelda->getPosY()) {
            if (this->cameraView->getPosY() < 500)
                this->cameraView->setPosY(10);
            if (this->zelda->getPosY() < 920)
                this->zelda->setPosY(10);
            break;
        }
        if (this->zelda->getPosY() != this->cameraView->getPosY()) {
            if (this->zelda->getPosY() > 920)
                this->zelda->setPosY(10);
            break;
        }
        break;
    }

    case Qt::Key_Up:
    {
        if (this->zelda->getPosY() <= (this->cameraView->getPosY()+250)){
            if (this->cameraView->getPosY() > -70)
                this->cameraView->setPosY(-10);
            if (this->zelda->getPosY() > 50)
                this->zelda->setPosY(-10);
        }
        if (this->zelda->getPosY() != (this->cameraView->getPosY())) {
            if (this->zelda->getPosY() > 50)
                this->zelda->setPosY(-10);
            break;
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

