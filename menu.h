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
#include <QGraphicsTextItem>
#include "game.h"

class Menu : public QGraphicsView
{
    Q_OBJECT
public:
    Menu();
    QGraphicsScene * scene_menu;
    QPushButton * jouer;
    QPushButton * musiquePlay;
    QPushButton * musiqueStop;
    QPushButton * quitter;
    QMediaPlayer * musique;



    Game * game;

public slots:
    void play();
    void playMusique();
    void stopMusique();

};

#endif // MENU_H
