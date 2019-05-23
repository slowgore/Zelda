#ifndef MENUITEM_H
#define MENUITEM_H

#include <QAbstractScrollArea>
#include <QGraphicsItem>
#include <QGraphicsPixmapItem>

class MenuItem
{
private:
    QGraphicsRectItem *rectangleDuHaut;
    QList<QGraphicsPixmapItem*> hearts;


public:
    MenuItem(int vie);
    QGraphicsRectItem* getRect();
    QList<QGraphicsPixmapItem*> *getHearts();
    ~MenuItem();
};

#endif // MENUITEM_H
