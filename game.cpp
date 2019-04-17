#include "game.h"

Game::Game(Model *model)
{
    this->view = new Map();
    this->timer =  new QTimer(this);
    timer->connect(timer, SIGNAL(timeout()), this, SLOT(showScene()));
    timer->start(20);
    //this->model = model;
}

void Game::start(){
    showScene();
    //this->view->afficherPersonnage(this->getModel()->getZelda());
    //this->view->affichageMenuEnHaut();
    this->view->show();
}

void Game::showScene()
{
    this->view->getMapScene()->clear();
    this->view->intinialisationScene();
}

void Game::onKeyPress(string key)
{
    if (key == "right")
    {
        this->view->getCameraView()->setPosX(100);
    }
    else if (key == "left") {
        this->view->getCameraView()->setPosX(-100);
    }
}

Model* Game::getModel() const
{
    return model;
}

void Game::setModel(Model *value)
{
    model = value;
}

Game::~Game(){
}
