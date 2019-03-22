#ifndef MENU_H
#define MENU_H

#include <QGraphicsView>
#include <QGraphicsScene>
#include <QPushButton>
#include <QGraphicsProxyWidget>
#include <QObject>
#include <QGraphicsItem>
#include<QGraphicsPixmapItem>
#include <QWidget>
#include <QtMultimedia/QMediaPlayer>
#include <QSound>
#include <QGraphicsTextItem>
#include "game.h"
#include "map.h"
#include "model.h"

class Menu : public QGraphicsView
{
    Q_OBJECT
private:
    QGraphicsScene * scene_menu;
    QPushButton * jouer;
    QPushButton * musiquePlay;
    QPushButton * musiqueStop;
    QPushButton * quitter;
    QSound * musique;
    Game * game;
    Map *view;
    Model * model;

public:
    Menu();

public slots:
    void play();
    void playMusique();
    void stopMusique();

};

#endif // MENU_H
