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

class Map : public QGraphicsView
{
private:
//    Game *controller;
    QGraphicsScene * scene;
    //QMediaPlayer * musiqueNiv;
    QSound * musiqueNiv;
    QGraphicsScene *mapScene;
    Camera *cameraView;

public:
    Map();
    /*void setControl(Game *controller) {
            //this->game = controller;
    }*/
    void background();
    void intinialisationScene();
    void affichageMenuEnHaut();
    void afficherPersonnage(Joueur *joueur);
};

#endif // MAP_H
