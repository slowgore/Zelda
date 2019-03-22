#ifndef MAP_H
#define MAP_H

#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QGraphicsPixmapItem>
#include <QSound>
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
        void background();

    private:
        QGraphicsScene *mapScene;
        Game *controller;
        QGraphicsScene *scene;
        QSound *musiqueNiv;
};

#endif // MAP_H
