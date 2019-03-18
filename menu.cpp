#include "menu.h"



Menu::Menu()
{

    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(1400,900);
    setWindowTitle("Zelda");



    musique = new QMediaPlayer();
    musique->setMedia(QUrl::fromLocalFile("../Zelda-2019/musique/intro.wav"));
    musique->play();

    scene_menu = new QGraphicsScene();
    scene_menu->setSceneRect(0,0,1400,900);
    scene_menu->setBackgroundBrush(QBrush(QImage("../Zelda-2019/images/ecran_pricipal2.jpg")));




    musiquePlay = new QPushButton("musique On");
    musiquePlay->setGeometry(950,800,150,30);
    connect(musiquePlay,SIGNAL(clicked()),this,SLOT(playMusique()));
    scene_menu->addWidget(musiquePlay);
    musiqueStop = new QPushButton("musique Off");
    musiqueStop->setGeometry(1150,800,150,30);
    connect(musiqueStop,SIGNAL(clicked()),this,SLOT(stopMusique()));
    scene_menu->addWidget(musiqueStop);

    QFont font ("Arial",40);
    font.setBold("Bold");
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

    /*logo = new QGraphicsPixmapItem();
    logo->setPixmap(QPixmap(":img/logo.png"));
    logo->setPos(300,100);
    scene_menu->addItem(logo);*/


    setScene(scene_menu);
    //show();
}

void Menu::play()
{
    //game = new Game();
    //musique->stop();
}

void Menu::lose(){
    Perdu = new QGraphicsScene();
    Perdu->setSceneRect(0,0,1400,900);
    Perdu->setBackgroundBrush(QBrush(QImage("C:/Users/marti/Desktop/ESME et autre/ESME cours/2017-2018/semestre 2/Projet fin d'année/Zelda-2019/images/ecran_pricipal2.jpg")));
    logoPerdu->setPixmap(QPixmap("C:/Users/marti/Desktop/ESME et autre/ESME cours/2017-2018/semestre 2/Projet fin d'année/Zelda-2019/images/perdu.png"));
    logoPerdu->setPos(300,100);
    Perdu->addItem(logoPerdu);
    setScene(Perdu);
}

void Menu::playMusique(){
    //musique->play();
}

void Menu::stopMusique(){
    //musique->stop();
}
