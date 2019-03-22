#include "model.h"

Model::Model(int x, int y)
{
    this->zelda = new Joueur(x, y);
}

void Model::resetModel(int x, int y){
    this->zelda = new Joueur(x, y);
}

Joueur *Model::getZelda() const
{
    return zelda;
}

void Model::setZelda(Joueur *value)
{
    zelda = value;
}
