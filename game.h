#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>
#include <QWidget>
#include "map.h"
#include "model.h"

class Game : public QWidget
{
    Q_OBJECT
private:
    QGraphicsScene * Scene;
    Map * view;
    Model *model;

public:
    Game(Map *view, Model *model);
    void start();
    Model *getModel() const;
    void setModel(Model *value);
    //manque un affichage de la scene pour pouvoir afficher le personnage
    ~Game();
};

#endif // GAME_H
