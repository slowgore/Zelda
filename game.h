#ifndef GAME_H
#define GAME_H


#include <QGraphicsView>
#include <QWidget>
#include "map.h"
#include "model.h"

class Map;
class Game : public QWidget
{
    Q_OBJECT

public:
    Game(Map *view, Model *model);
    void start();

    Model *getModel() const;
    void setModel(Model *value);

    QGraphicsScene * Scene;
    Map * view;
    Model *model;
    //manque un affichage de la scene pour pouvoir afficher le personnage
    ~Game();
};

#endif // GAME_H
