#ifndef MAP_H
#define MAP_H

#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QMediaPlayer>
#include <QKeyEvent>

//#include "game.h"

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
    QGraphicsScene *mapScene;

//private:
    void background();
    Game *controller;
    QGraphicsScene * scene;
    QMediaPlayer * musiqueNiv;



};

#endif // MAP_H
