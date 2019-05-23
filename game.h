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
    Map * view;
    QTimer *timer;
    QTimer *timerM;
    QAbstractScrollArea *scrool;

public:
    Game();
    void start();

//    void onKeyPress(string key);
//    manque un affichage de la scene pour pouvoir afficher le personnage
    ~Game();

public slots:
    void showScene();
    void updateMonster();
};

#endif // GAME_H
