#ifndef MODEL_H
#define MODEL_H

#include "joueur.h"



class Model
{
public:
    Model();

    Joueur *getZelda() const;
    void setZelda(Joueur *value);

    void resetModel();


private:
    Joueur *zelda;



};

#endif // MODEL_H
