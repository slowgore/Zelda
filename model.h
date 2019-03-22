#ifndef MODEL_H
#define MODEL_H

#include "joueur.h"

class Model {

private:
    Joueur *zelda;

public:
    Model(int x, int y);
    Joueur *getZelda() const;
    void setZelda(Joueur *value);
    void resetModel(int x, int y);
};

#endif // MODEL_H
