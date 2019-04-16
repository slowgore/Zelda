#include "camera.h"

Camera::Camera()
{
    this->posX = 0;
    this->posY = 0;
}

void Camera::setPosX(int x)
{
    //rejouter pour eviter de sortir du cadre

    this->posX += x;
}

void Camera::setPosY(int y)
{
    //rejouter pour eviter de sortir du cadre
    this->posY += y;
}

int Camera::getPosX()
{
    //rejouter pour eviter de sortir du cadre
    return this->posX;
}

int Camera::getPosY()
{
    return this->posY;
}
