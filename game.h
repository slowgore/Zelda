#ifndef GAME_H
#define GAME_H


#include <QGraphicsView>
#include <QWidget>
#include <QTimer>
#include <QAbstractScrollArea>

#include "map.h"
#include "model.h"

class Game : public QWidget
{
    Q_OBJECT
private:
    QGraphicsScene * Scene;
    Map * view;
    Model *model;
    QTimer *timer;
    QAbstractScrollArea *scrool;

public:
    Game(Map *view, Model *model);
    void start();
    Model *getModel() const;
    void setModel(Model *value);
    void onKeyPress(string key);
    //manque un affichage de la scene pour pouvoir afficher le personnage
    ~Game();

public slots:
    void showScene();
};

#endif // GAME_H
