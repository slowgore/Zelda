#include "menu.h"

Menu::Menu()
{
    musique = new QSound(":/musique/musique/intro.wav");
    scene_menu = new QGraphicsScene();
    musiquePlay = new QPushButton("musique On");
    musiqueStop = new QPushButton("musique Off");
    QFont font ("Arial",40);
    jouer = new QPushButton("Jouer");
    quitter = new QPushButton("Quitter");

    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(1400,900);
    setWindowTitle("Zelda");

    //debut musique
    musique->play();

    //fond d'écran
    scene_menu->setSceneRect(0,0,1400,900);
    scene_menu->setBackgroundBrush(QBrush(QImage(":/images/images/ecran_pricipal2.jpg")));

    //init boutton musique on
    musiquePlay->setGeometry(950,800,150,30);
    connect(musiquePlay,SIGNAL(clicked()),this,SLOT(playMusique()));
    scene_menu->addWidget(musiquePlay);

    //init boutton musique off
    musiqueStop->setGeometry(1150,800,150,30);
    connect(musiqueStop,SIGNAL(clicked()),this,SLOT(stopMusique()));
    scene_menu->addWidget(musiqueStop);

    font.setBold(5);

    //lancement jeux
    jouer->setFlat(true);
    jouer->setFont(font);
    jouer->setStyleSheet("background-color: rgba( 255, 255, 255, 30% );" );
    jouer->setGeometry(50,300,200,70);
    connect(jouer,SIGNAL(clicked()),this,SLOT(play()));
    scene_menu->addWidget(jouer);

    //init boutton quitter
    quitter->setGeometry(50,800,150,50);
    connect(quitter,SIGNAL(clicked()),this,SLOT(close()));
    scene_menu->addWidget(quitter);
    setScene(scene_menu);
}

void Menu::play()
{
    game = new Game();
    musique->stop();
    this->close();
    game->start();
}

void Menu::playMusique()
{
    musique->play();
}

void Menu::stopMusique()
{
    musique->stop();
}
