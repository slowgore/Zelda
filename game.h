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
    QGraphicsScene * Scene;
    Game(Map *view);
    void start();
    Map * view;
    Model *model;
    ~Game();
};

#endif // GAME_H
