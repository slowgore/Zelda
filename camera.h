#ifndef CAMERA_H
#define CAMERA_H


#include <iostream>
#include <QGraphicsScene>
#include <QMovie>
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
