#ifndef MAP_H
#define MAP_H

#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QGraphicsPixmapItem>
#include <QtMultimedia/QMediaPlayer>
#include <QKeyEvent>

#include "joueur.h"

class Game;
class Map : public QGraphicsView
{
public:
    Map();
    /*void setControl(Game *controller) {
            //this->game = controller;
    }*/
    void intinialisationScene();
    void affichageMenuEnHaut();
    void afficherPersonnage(Joueur *joueur);
    QGraphicsScene *mapScene;

//private:
    void background();
    Game *controller;
    QGraphicsScene * scene;
    QMediaPlayer * musiqueNiv;



};

#endif // MAP_H
