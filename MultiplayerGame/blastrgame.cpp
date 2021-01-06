//#include "Error in " Util.relativeFilePath('C:/Oliver Killane's Files/General/B - Uncompleted Coding Projects/C++/Qt/Multiplayer Game/MultiplayerGame/blastrgame.h', 'C:/Oliver Killane's Files/General/B - Uncompleted Coding Projects/C++/Qt/Multiplayer Game/MultiplayerGame' + '/' + Util.path('blastrgame.cpp'))": SyntaxError: Expected token `)'"
#include "blastrgame.h"
#include <QBrush>
#include <QPen>
#include <QFont>

BlastrClient::BlastrClient(QGraphicsView *view, Ui::MainWindow *Ui, PlayerDetails joindetails)
{
    // signal-slot connection is already made between the game and communication client from within the Mainwindow class.

    // Set up graphicsview and mainwindow UI pointers.
    graphicsView = view;
    GUI = Ui;

    // Set up graphics scene.
    graphicsScene = new QGraphicsScene();
    graphicsView->setScene(graphicsScene);

    // Set up user details from PlayerDetails struct
    user.name = joindetails.name;
    user.colour = joindetails.colour;
    user.xposition = 0;
    user.yposition = 0;
    user.kills = 0;
    user.ready = true;


    return;
}

void BlastrClient::RecieveGameData(GameData data){
    //use switch to work out what needs updating/changing.
    switch(data.param1){
        case 5 :
            // Server Kill
            userKilled(data.param5);
            break;
        case 6 :
            //Server Respawn
            userRespawn();
            break;
        case 7 :
            // Add Player
            addPlayer(QColor(data.param2, data.param3, data.param4), data.param5);
            break;
        case 8 :
            // Update Player Pos
            updatePlayerPos(data.param5, data.param2, data.param3);
            break;
        case 9 :
            // Update Player Health
            updatePlayerHealth(data.param5, data.param2);
            break;
        case 10 :
            // Update Player Kills
            UpdatePlayerKills(data.param5, data.param2);
            break;
        case 11 :
            // Player exit
            removePlayer(data.param5);
            break;
        case 12 :
            // Add Bullet
            addBullet(data.param5, data.param4, data.param2, data.param3);
            break;
        case 14 :
            updateBulletPos(data.param5, data.param4, data.param2, data.param3);
            break;
        case 15 :
            removeBullet(data.param5, data.param2);
            break;

            //error occured
    }

    //update the Graphicsview
    updateview();

    return;
}

void BlastrClient::RecieveInput(QKeyEvent *event){



    return;
}


void BlastrClient::updateview(){

    drawMap();

    drawplayers();

    drawbullets();

    //update Graphicsview

    return;
}

void BlastrClient::drawMap(){
    switch (map){
        case 0:
            map0();
            break;
    }
    return;
}

void BlastrClient::drawplayers(){

    // Default values for creating rectangle, outline and text.
    QBrush *brush = new QBrush(Qt::white);
    QPen *pen = new QPen(Qt::black);
    QFont *font = new QFont("Rockwell", 10);

    // Holder variables to allow for manipulation of rect, text.


    for (BlastrPlayer player : players){
        brush->setColor(player.colour);
        graphicsScene->addRect(0,0,100,100,*pen, *brush);
        graphicsScene->addText(player.name, *font);

    }

    return;
}

void BlastrClient::drawbullets(){

    return;
}



void BlastrClient::map0(){}

void BlastrClient::userKilled(QString killedby){}
void BlastrClient::userRespawn(){}
void BlastrClient::addPlayer(QColor colour, QString Name){}
void BlastrClient::removePlayer(QString name){}

void BlastrClient::updatePlayerPos(QString name, int x, int y){}
void BlastrClient::updatePlayerHealth(QString name, int health){}
void BlastrClient::UpdatePlayerKills(QString name, int kills){}

//Bullet data management
void BlastrClient::updateBulletPos(QString name, int bulletNo, int x, int y){}
void BlastrClient::addBullet(QString name, int bulletno, int x, int y){}
void BlastrClient::removeBullet(QString name, int bulletno){}





