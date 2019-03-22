#ifndef MODEL_H
#define MODEL_H

#include "joueur.h"

class Model {

private:
    Joueur *zelda;

public:
    Model();
    Joueur *getZelda() const;
    void setZelda(Joueur *value);
    void resetModel();
};

#endif // MODEL_H
