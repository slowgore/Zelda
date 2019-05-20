#ifndef ARMES_H
#define ARMES_H

#include <QAbstractItemModel>

#include <QPixmap>
#include <QString>

class armes
{
public:
    armes();

    QPixmap getTile(QString);

    QString getNom() const;
    void setNom(const QString &value);

    int getDega() const;
    void setDega(int value);

private:
    QString nom;
    int degats;
};

#endif // ARMES_H
