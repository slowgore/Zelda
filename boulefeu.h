#ifndef BOULEFEU_H
#define BOULEFEU_H

#include <QGraphicsItem>
#include <QWidget>
#include <QTimer>

class bouleFeu : public QWidget
{
    Q_OBJECT
public:
    bouleFeu(QString direction);
    QGraphicsPixmapItem *getTile();
    QGraphicsItem* getCollison();
    ~bouleFeu();

private:
    QGraphicsPixmapItem *tile;
    QTimer *timer;
    QTimer *timer2;
    QString direction;
    QList<QGraphicsItem*> collision;
    QGraphicsItem *monstre;

public slots:
    void updateboule();
    void supboule();

};

#endif // BOULEFEU_H
