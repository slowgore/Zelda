#ifndef EPEE_H
#define EPEE_H

#include <QAbstractItemModel>
#include <QPixmap>

class Epee
{
public:
    Epee();
    QPixmap getTile() const;
    void setTile(const QPixmap &value);

private:
    QPixmap tile;
};

#endif // EPEE_H
