#ifndef CAMERA_H
#define CAMERA_H

#include <vector>
#include <iostream>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QLabel>
#include <QMovie>
#include <QDebug>
#include <QKeyEvent>

class Camera:QGraphicsScene
{
private:
    int posX;
    int posY;

public:
    Camera();
    void setPosX(int x);
    void setPosY(int y);
    int getPosX();
    int getPosY();
};

#endif // CAMERA_H
