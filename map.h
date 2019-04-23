#ifndef MAP_H
#define MAP_H

#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QGraphicsPixmapItem>
#include <QtMultimedia/QMediaPlayer>
#include <QSound>
#include <QKeyEvent>

#include "joueur.h"
#include "camera.h"
#include "niveaux.h"

class Map : public QGraphicsView
{
private:
//    Game *controller;
    QGraphicsScene * scene;
    //QMediaPlayer * musiqueNiv;
    QSound * musiqueNiv;
    QGraphicsScene *mapScene;
    Camera *cameraView;
    Niveaux *niveaux;
    Joueur *zelda;

public:
    Map();
    void background();
    void reset();
    void keyPressEvent(QKeyEvent *event);
    void intinialisationScene();
    void affichageMenuEnHaut();
    void afficherPersonnage(Joueur *joueur);
    QGraphicsScene *getMapScene();
    Camera *getCameraView();
};

#endif // MAP_H
