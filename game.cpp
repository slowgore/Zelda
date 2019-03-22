#include "game.h"

Game::Game(Map *view, Model *model)
{
    this->view = view;

    //this->model = model;
}

void Game::start(){
    this->view->intinialisationScene();
    //this->view->afficherPersonnage(this->getModel()->getZelda());
    //this->view->affichageMenuEnHaut();
    this->view->show();

}

Model *Game::getModel() const
{
    return model;
}

void Game::setModel(Model *value)
{
    model = value;
}

Game::~Game()
{

}
