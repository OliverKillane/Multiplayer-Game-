#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "communication.h"
// Struct for storage of join details
struct PlayerDetails {
    QColor colour;
    QString name;
    QString JoinIP;

};

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

signals:

private slots:
    void on_join_clicked();
    void on_host_clicked();
    void on_credits_clicked();
    void on_Return_clicked();
    void on_Return_2_clicked();
    void on_SelectColour_clicked();
    void on_Return_3_clicked();
    void on_pushButton_clicked();
    void on_CancelConnection_clicked();
    void on_JoinServer_clicked();
    void on_startgame_clicked();
    void on_return_2_clicked();
    void on_maxplayers_valueChanged(int value);

    void StartClientGame(GameData data);

    void on_MenuReturn_clicked();

private:
    Ui::MainWindow *ui;
    struct PlayerDetails joininfo;
    CommunicationClient *client;
    CommunicationServer *server;

    void ConnectClientGame();

    void BlastrGameClient(int map);

    void BlastrGameServer(int map);



    
};
#endif // MAINWINDOW_H
