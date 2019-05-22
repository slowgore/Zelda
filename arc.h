#ifndef ARC_H
#define ARC_H

#include <QAbstractItemModel>
#include <QGraphicsItem>
#include <QWidget>
#include <QTimer>

class Arc : public QWidget
{
    Q_OBJECT

public:
    Arc(QString direction);
    QGraphicsPixmapItem* getTileFleche();
    void setTileFleche(QGraphicsPixmapItem *value);
    QGraphicsItem* getCollison();
    ~Arc();

private:
    QGraphicsPixmapItem *tile;
    QTimer *timer;
    QString direction;
    QList<QGraphicsItem*> collision;
    QGraphicsItem *monstre;

public slots:
    void updatefleche();

};

#endif // ARC_H
