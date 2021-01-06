#ifndef BLASTRGAME_H
#define BLASTRGAME_

#include <QObject>
#include <QColor>
#include <QString>
#include <QGraphicsView>
#include <QTableView>
#include "Communication.h"
#include "mainwindow.h"

typedef struct BlastrPlayers {
    int health;
    int xposition;
    int yposition;
    int kills;
    QString name;
    QColor colour;
    bool ready;
} BlastrPlayer;


typedef struct BlastrBullets {
    int xposition;
    int yposition;
    int direction;

} BlastrBullet;



class BlastrClient : public QObject
{
    Q_OBJECT

public:
    BlastrClient(QGraphicsView *view, Ui::MainWindow *Ui, PlayerDetails joindetails);

signals:
    void SendGameData(GameData data);

public slots:
    void RecieveGameData(GameData data);
    void RecieveInput(QKeyEvent *event);

private:
    Ui::MainWindow *GUI;
    QGraphicsView *graphicsView;
    QGraphicsScene *graphicsScene;

    QList<BlastrPlayer> players;
    QList<BlastrBullet> bullets;

    BlastrPlayer user;

    int map;

    // Displaying graphics
    void drawMap();
    void drawplayers();
    void drawbullets();
    void updateview();


    //Client->Server
    void clientMove(int xval, int yval);
    void clientRespawn();
    void clientShoot(int direction);


    //Server->Client
    // Player data management
    void userKilled(QString killedby);
    void userRespawn();
    void addPlayer(QColor colour, QString Name);
    void removePlayer(QString name);

    void updatePlayerPos(QString name, int x, int y);
    void updatePlayerHealth(QString name, int health);
    void UpdatePlayerKills(QString name, int kills);

    //Bullet data management
    void updateBulletPos(QString name, int bulletNo, int x, int y);
    void addBullet(QString name, int bulletno, int x, int y);
    void removeBullet(QString name, int bulletno);





    void map0();
};


class BlastrServer : public QObject {
    Q_OBJECT

public:
    BlastrServer(QTableView *table, int map);

signals:
    void SendGamedata(GameData data);

public slots:

private:
    QTableView *table;



};

#endif // BLASTRGAME_H
