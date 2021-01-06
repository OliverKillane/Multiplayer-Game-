#include "CommunicationServer.h"
#include <QDataStream>


/*
Server:

->Create Server:            CommunicationServer(QObject *parent = 0);

->Prepare Server:           SetupServer(int game, int map, int maxplayers);
                            connect(server, SIGNAL(NewConnection), this, SLOT(store new commthread connection));


CommThread:

->Once recieved pointer from server 'NewConnection' signal:
->  CommThread->

*/




CommThread::CommThread(quintptr ID, QObject *parent) : QThread(parent){
    socketDescriptor = ID;

    return;
}

void CommThread::run(){

    // Setup socket.
    socket = new QTcpSocket();

    // Setting socket to hold the connection.
    if(!socket->setSocketDescriptor(this->socketDescriptor)) {
        // something's wrong, we just emit a signal
        emit ServerError(socket->error(), this);
        return;
    }

    // Connect socket signals
    connect(socket, SIGNAL(ReadyRead()), this, SLOT(ServerDataRecieved()));
    connect(socket, SIGNAL(error(QAbstractSocket::SocketError)),this, SLOT(CatchError(QAbstractSocket::SocketError)));


    // Prevents slots from dying once the thread dies.
    exec();
}

void CommThread::closeconnection(){
    socket->close();
}

void CommThread::ServerDataRecieved(){

    // Create GameData struct to hold data, and QByteArray to hold the serialized data recieved.
    GameData unserializeddata;
    QByteArray serializeddata = socket->readAll();

    // QDataStream used to remove data from the QByteArray. Hence stream operators used.
    QDataStream stream(serializeddata);
    stream.setVersion(QDataStream::Qt_5_15);

    stream >> unserializeddata.type
           >> unserializeddata.param1
           >> unserializeddata.param2
           >> unserializeddata.param3
           >> unserializeddata.param4
           >> unserializeddata.param5;

    // Send signal to recieve the data.
    emit RecieveData(unserializeddata, this);

    return;
}

void CommThread::SendData(GameData data){

    // QByteArray created to hold data to be sent.
    QByteArray serializeddata;

    // QData Stream used to add serialized data to the QByteArray.
    QDataStream stream(&serializeddata, QIODevice::WriteOnly);
    stream.setVersion(QDataStream::Qt_5_15);

    stream << data.type
           << data.param1
           << data.param2
           << data.param3
           << data.param4
           << data.param5;

    // Sending serialized data (as a QByteArray) to the client.
    socket->write(serializeddata);

    return;
}

void CommThread::CatchError(QAbstractSocket::SocketError socketError){
    emit ServerError(socketError, this);

    return;
}


CommunicationServer::CommunicationServer(QObject *parent) : QTcpServer(parent) {
}

void CommunicationServer::SetupServer(int game, int map, int maxnumplayers){
    gamemode = game;
    mapchosen = map;
    maxplayers = maxnumplayers;

    int port = 1400;
    if(!this->listen(QHostAddress::Any,port)){
        emit ServerError(QString("Server Could not start"));
    }
    else {
        emit ServerStarted();
    }
}

void CommunicationServer::ShutdownServer(){
    for (CommThread *client : CommThreadList){
        client->closeconnection();

        // Not safe, return 0 for successful
        client->exit();
    }
}

void CommunicationServer::incomingConnection(qintptr socketDescriptor){

    // Check that player is allowed.
    if (CommThreadList.length() < maxplayers){

        CommThread *newclient = new CommThread(socketDescriptor, this);

        // Send game, map details
        GameData gamesetup;
        gamesetup.param1 = gamemode;
        gamesetup.param2 = mapchosen;
        gamesetup.param3 = 0;
        gamesetup.param4 = 0;
        gamesetup.param5 = QString("");

        newclient->SendData(gamesetup);

        CommThreadList.append(newclient);

        newclient->start();

        emit NewConnection(newclient);
    }

    else {
            // Rejected Connection
    }

}


/* Game info:
 *
 * For server:
 *      to send:    client->SendClientData(gamedata);
 *      to recieve: slot(gamedata, client pointer) -> (use pointer to get name)
 *
 *
 *
 *
 *
 *
 *
 *
 * Gamedata:
 *      param1  (int)       instruction type
 *      param2  (int)       free
 *      param3  (int)       free
 *      param4  (int)       free
 *      param5  (QString)   free
 *
 *
 * Instruction types:                       (int)       (int)       (int)       (QString)
 * Instruction No:  Description:            Param2:     Param3:     Param4:     Param5:         To:
 *      000         Server Shutdown         N/A         N/A         N/A         N/A             Server->Client
 *      001         Server Handshake        gamemode    map         N/A         N/A             Server->Client
 *      002         Client Handshake        Red         Green       Blue        Name            Client->Server
 * -----BLASTR ONLY------------------------------------------------------------------------------------------------
 *      003         Client Move             x-val       y-val       N/A         N/A             Client->Server
 *      004         Client Respawn          x-coor      y-coor      N/A         N/A             Client->Server
 *      005         Server Kill             N/A         N/A         N/A         Killer          Server->Client
 *      006         Server Respawn          N/A         N/A         N/A         N/A             Server->Client
 *      007         Add Player              Red         Green       Blue        Name            Server->All Clients
 *      008         Update Player Pos       x-coor      y-coor      N/A         Name            Server->All Clients
 *      009         Update Player Health    health      N/A         N/A         Name            Server->All Clients
 *      010         Update Player kills     kills       N/A         N/A         Name            Server->All Clients
 *      011         Player Exit             N/A         N/A         N/A         Name            Server->All Clients
 *      012         Add Bullet              x-coor      y-coor      BulletNo    Name            Server->All Clients
 *      013         Shoot Bullet            x-coor      y-coor      direction   N/A             Client->Server
 *      014         Update Bullet Pos       x-coor      y-coor      BulletNo    Name            Server->All Clients
 *      015         Destroy Bullet          BulletNo    N/A         N/A         Name            Server->All Clients
 *
 *
 *
 *
 * Maps:
 *      001 - Cubes
 *
 * Gamemodes:
 *      001 - BLASTR
*/
