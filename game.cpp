#include "game.h"

Game::Game(QWidget *parent)
    : QMainWindow(parent)
{
    scene = new QGraphicsScene();
    //musiqueNiv = new QMediaPlayer();
    //musiqueNiv->setMedia(QUrl::fromLocalFile("../Zelda-2019/musique/niveau1.wav"));
    //musiqueNiv->play();
    scene->setSceneRect(0,0,1400,900);
    setFixedSize(1400,900);
}

Game::~Game()
{

}
