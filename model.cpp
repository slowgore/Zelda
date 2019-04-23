#include "model.h"

Model::Model()
{
    this->zelda = new Joueur();
}

void Model::resetModel(){
    this->zelda = new Joueur();
}

Joueur *Model::getZelda() const
{
    return zelda;
}

void Model::setZelda(Joueur *value)
{
    zelda = value;
}
