//#include "Error in " Util.relativeFilePath('C:/Oliver Killane's Files/General/B - Uncompleted Coding Projects/C++/Qt/Multiplayer Game/mainwindow.h', 'C:/Oliver Killane's Files/General/B - Uncompleted Coding Projects/C++/Qt/Multiplayer Game' + '/' + Util.path('mainwindow.cpp'))": SyntaxError: Expected token `)'"
#include "ui_mainwindow.h"
#include "mainwindow.h"
#include "blastrgame.h"
#include <QColorDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->stackedWidget->setCurrentIndex(0);

    joininfo.colour = Qt::white;

    QStringList maps = {"Cubes", "Coridoors"};
    QStringList gamemodes = {"BLASTR"};


    ui->map->addItems(maps);
    ui->gamemode->addItems(gamemodes);
    
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked(){}

void MainWindow::on_join_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_host_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_credits_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_Return_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_Return_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_SelectColour_clicked()
{
    QColor colourselected;
    colourselected = QColorDialog::getColor(Qt::white, this);

    //code to pass colour on to class for user connecting
    
    joininfo.colour = colourselected;

    QPalette pal = ui->SelectColour->palette();
    pal.setColor(QPalette::Button, colourselected);
    ui->SelectColour->setAutoFillBackground(true);
    ui->SelectColour->setPalette(pal);
    ui->SelectColour->update();
}

void MainWindow::on_Return_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_CancelConnection_clicked()
{
    //Cancel communicate object

    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_JoinServer_clicked()
{

    // Get join infomation
    joininfo.name = ui->EnterName->text();
    joininfo.JoinIP = ui->EnterIP->text();

    ui->stackedWidget->setCurrentIndex(5);

    // join server method
    ConnectClientGame();
}

void MainWindow::on_startgame_clicked()
{
    server = new CommunicationServer();

    int game = ui->gamemode->currentIndex() + 1;
    int map = ui->map->currentIndex() + 1;
    int playerlimit = ui->maxplayers->value();

    server->SetupServer(game, map, playerlimit);

    switch(game){
        case 1 :
            BlastrGameServer(map);
    }


    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::BlastrGameServer(int map){


}



void MainWindow::on_return_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_maxplayers_valueChanged(int value)
{
    ui->maxplayersshown->setText(QString::number(value));
}

void MainWindow::ConnectClientGame(){
    client = new CommunicationClient();
    client->SetupConnection(joininfo.JoinIP, "4000", joininfo.colour, joininfo.name);

    connect(client, SIGNAL(RecieveData), this, SLOT(StartClientGame));

}

void MainWindow::StartClientGame(GameData data){
    GameData userdata;



    if (data.param1 == 1){

        // Create GamdeData struct for sending.
        userdata.param1 = 2;
        userdata.param2 = joininfo.colour.red();
        userdata.param3 = joininfo.colour.green();
        userdata.param3 = joininfo.colour.blue();
        userdata.param4 = 0;
        userdata.param5 = joininfo.name;

        // Send server client name, colour.
        client->SendData(userdata);


        // Use gamemode to determine function to call, pass map.
        switch(data.param2){
            case 1:
                BlastrGameClient(data.param3);
        }
    }
    else {

        // End client and display error
        client->~CommunicationClient();
        ui->stackedWidget->setCurrentIndex(0);
    }

    return;
}




void MainWindow::on_MenuReturn_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
    return;
}

void MainWindow::BlastrGameClient(int map){

    // Create Game
    BlastrClient *game = new BlastrClient(ui->graphicsView, ui, joininfo);

    // disconnect data recieve
    disconnect(client, SIGNAL(RecieveData));

    // connect game and client together.

    connect(game, SIGNAL(SendGameData), client, SLOT(SendData));
    connect(client, SIGNAL(RecieveData), game, SLOT(RecieveGameData));

    return;
}
