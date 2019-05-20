#include "armes.h"

armes::armes()
{
   this->degats=1;
}

QString armes::getNom() const
{
    return nom;
}

void armes::setNom(const QString &value)
{
    nom = value;
}
int armes::getDega() const
{
    return degats;
}

void armes::setDega(int value)
{
    degats = value;
}
