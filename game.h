#ifndef GAME_H
#define GAME_H


#include <QGraphicsView>
#include <QWidget>
#include <QTimer>
#include <QAbstractScrollArea>

#include "map.h"

class Game : public QWidget
{
    Q_OBJECT
private:
    QGraphicsScene * Scene;
    Map * view;
    QTimer *timer;
    QAbstractScrollArea *scrool;

public:
    Game();
    void start();

//    void onKeyPress(string key);
//    manque un affichage de la scene pour pouvoir afficher le personnage
    ~Game();

public slots:
    void showScene();
};

#endif // GAME_H
