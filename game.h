#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>
#include <QMainWindow>
#include <QMediaPlayer>
class Game : public QMainWindow
{
    Q_OBJECT

public:
    Game(QWidget *parent = 0);
    QGraphicsScene * scene;
    QMediaPlayer * musiqueNiv;
    ~Game();
};

#endif // GAME_H
