#include "game.h"

Game::Game()
{
    this->view = new Map();
    this->view->intinialisationScene();
    this->timer =  new QTimer(this);
    timer->connect(timer, SIGNAL(timeout()), this, SLOT(showScene()));
    timer->start();
}

void Game::start(){
    showScene();
    this->view->show();
}

void Game::showScene()
{
    this->view->update();
}

//void Game::onKeyPress(string key)
//{
//}


Game::~Game(){
}
