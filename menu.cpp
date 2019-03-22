#include "menu.h"




Menu::Menu()
{

    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(1400,900);
    setWindowTitle("Zelda");

    musique = new QSound(":/musique/musique/intro.wav");
    musiquePlay = new QPushButton("musique On");
    musiqueStop = new QPushButton("musique Off");
    scene_menu = new QGraphicsScene();
    QFont font ("Arial",40);
    jouer = new QPushButton("Jouer");
    quitter = new QPushButton("Quitter");
    this->view = new Map();

    //lancement musique
    musique->play();

    //Image de fond
    scene_menu->setSceneRect(0,0,1400,900);
    scene_menu->setBackgroundBrush(QBrush(QImage(":/images/images/ecran_pricipal2.jpg")));

    //init bouton music on
    musiquePlay->setGeometry(950,800,150,30);
    connect(musiquePlay,SIGNAL(clicked()),this,SLOT(playMusique()));
    scene_menu->addWidget(musiquePlay);

    //init bouton music off
    musiqueStop->setGeometry(1150,800,150,30);
    connect(musiqueStop,SIGNAL(clicked()),this,SLOT(stopMusique()));
    scene_menu->addWidget(musiqueStop);

    font.setBold(5);

    //init bouton Jouer
    jouer->setFlat(true);
    jouer->setFont(font);
    jouer->setStyleSheet("background-color: rgba( 255, 255, 255, 30% );" );
    jouer->setGeometry(50,300,200,70);
    connect(jouer,SIGNAL(clicked()),this,SLOT(play()));
    scene_menu->addWidget(jouer);

    //init bouton quitter
    quitter->setGeometry(50,800,150,50);
    connect(quitter,SIGNAL(clicked()),this,SLOT(close()));
    scene_menu->addWidget(quitter);
    setScene(scene_menu);
}

void Menu::play()
{
    game = new Game(view,model);

    musique->stop();
    this->close();
    game->start();
}


void Menu::playMusique(){
    musique->play();
}

void Menu::stopMusique(){
    musique->stop();
}
