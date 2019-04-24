#ifndef MENUITEM_H
#define MENUITEM_H

#include <QAbstractScrollArea>

#include "map.h"
#include "joueur.h"
#include "camera.h"

class MenuItem
{
public:
    MenuItem();
    void affichageMenuEnHaut();
    //~MenuItem();
private:
    QGraphicsRectItem *rectangleDuHaut;
    Map *view;
    Joueur *zelda;
    Camera *cameraView;
};

#endif // MENUITEM_H
