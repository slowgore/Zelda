#ifndef MODEL_H
#define MODEL_H

#include "joueur.h"



class Model
{
private:
    Joueur *zelda;

public:
    Model(int, int);
    Joueur *getZelda() const;
    void setZelda(Joueur *value);
    void resetModel(int, int);
};

#endif // MODEL_H
