#include "game.h"

Game::Game(Map *view)
{
    this->view = view;

    //this->model = model;
}

void Game::start(){


    this->view->intinialisationScene();
    this->view->affichageMenuEnHaut();
    this->view->show();

}


Game::~Game()
{

}
