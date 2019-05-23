#ifndef MAP_H
#define MAP_H

#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QGraphicsPixmapItem>
#include <QtMultimedia/QMediaPlayer>
#include <QSound>
#include <QKeyEvent>
#include <QTime>

#include "joueur.h"
#include "camera.h"
#include "niveaux.h"
#include "menuitem.h"
#include "hostile.h"
#include "arc.h"

class Map : public QGraphicsView
{
private:
    QGraphicsView *view;
    MenuItem *menu;
    QGraphicsPixmapItem* old;
    //QMediaPlayer * musiqueNiv;
    QSound * musiqueNiv;
    QGraphicsScene *mapScene;
    Camera *cameraView;
    Niveaux *niveaux;
    Joueur *zelda;
    Arc *fleche;
    QList<Hostile*> monstres;
    int attaque1 = 0;
    int invincible = 0;
    int posSpawnX;
    int posSpawnY;

public:
    Map();
    void background();
    void reset();
    void keyPressEvent(QKeyEvent *event);
    void intinialisationScene();
    void update();
    void affichageMenuEnHaut();
    void affichageMonstre(Hostile *hostil);
    void afficherPersonnage(Joueur *joueur);
    void updateMenuHaut();
    void updateMonster();
    void delay(int i);
    void spawnHeart();
    QGraphicsScene *getMapScene();
    Camera *getCameraView();
};

#endif // MAP_H
