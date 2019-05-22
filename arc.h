#ifndef ARC_H
#define ARC_H

#include <QAbstractItemModel>
#include <QGraphicsItem>

class Arc
{

public:
    Arc();
    QPixmap getTileFleche() const;
    void setTileFleche(const QPixmap &value);
    void fleches();

private:
    QPixmap tile;
    int distance = 0;

};

#endif // ARC_H
