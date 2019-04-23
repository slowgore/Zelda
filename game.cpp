#include "game.h"

Game::Game()
{
    this->view = new Map();
    this->timer =  new QTimer(this);
    timer->connect(timer, SIGNAL(timeout()), this, SLOT(showScene()));
    timer->start(20);
}

void Game::start(){
    showScene();
    //this->view->affichageMenuEnHaut();
    this->view->show();
}

void Game::showScene()
{
    this->view->getMapScene()->clear();
    this->view->intinialisationScene();
}

//void Game::onKeyPress(string key)
//{
//}


Game::~Game(){
}
