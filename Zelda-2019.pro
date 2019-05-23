#-------------------------------------------------
#
# Project created by QtCreator 2019-03-15T09:08:54
#
#-------------------------------------------------

QT       += core gui \
         multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Zelda-2019
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += ressources_big

SOURCES += \
        main.cpp \
        game.cpp \
    menu.cpp \
    map.cpp \
    personnage.cpp \
    joueur.cpp \
    camera.cpp \
    niveaux.cpp \
    menuitem.cpp \
    hostile.cpp \
    epee.cpp \
    arc.cpp \
    boulefeu.cpp

HEADERS += \
        game.h \
    menu.h \
    map.h \
    personnage.h \
    joueur.h \
    camera.h \
    niveaux.h \
    menuitem.h \
    hostile.h \
    epee.h \
    arc.h \
    boulefeu.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    ressource.qrc
