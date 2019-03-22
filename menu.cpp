#include "menu.h"




Menu::Menu()
{

    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(1400,900);
    setWindowTitle("Zelda");


    //musique = new QMediaPlayer();
    //musique->setMedia(QUrl::fromLocalFile(":/musique/musique/intro.wav"));
    musique = new QSound(":/musique/musique/intro.wav");
    musique->play();

    scene_menu = new QGraphicsScene();
    scene_menu->setSceneRect(0,0,1400,900);
    scene_menu->setBackgroundBrush(QBrush(QImage(":/images/images/ecran_pricipal2.jpg")));


    musiquePlay = new QPushButton("musique On");
    musiquePlay->setGeometry(950,800,150,30);
    connect(musiquePlay,SIGNAL(clicked()),this,SLOT(playMusique()));
    scene_menu->addWidget(musiquePlay);
    musiqueStop = new QPushButton("musique Off");
    musiqueStop->setGeometry(1150,800,150,30);
    connect(musiqueStop,SIGNAL(clicked()),this,SLOT(stopMusique()));
    scene_menu->addWidget(musiqueStop);

    QFont font ("Arial",40);
    font.setBold(5);
    jouer = new QPushButton("Jouer");
    jouer->setFlat(true);
    jouer->setFont(font);
    jouer->setStyleSheet("background-color: rgba( 255, 255, 255, 30% );" );
    jouer->setGeometry(50,300,200,70);
    connect(jouer,SIGNAL(clicked()),this,SLOT(play()));
    scene_menu->addWidget(jouer);

    quitter = new QPushButton("Quitter");
    quitter->setGeometry(50,800,150,50);
    connect(quitter,SIGNAL(clicked()),this,SLOT(close()));
    scene_menu->addWidget(quitter);
    setScene(scene_menu);

    this->view = new Map();
}

void Menu::play()
{
    musique->stop();
    this->close();
    game = new Game(view,model);
    game->start();


}


void Menu::playMusique(){
    musique->play();
}

void Menu::stopMusique(){
    musique->stop();
}
