//#ifndef Error in " Cpp.headerGuard('C:/Oliver Killane's Files/General/B - Uncompleted Coding Projects/C++/Qt/Multiplayer Game/MultiplayerGame/CommunicationServer.h')": SyntaxError: Expected token `)'
//#define Error in " Cpp.headerGuard('C:/Oliver Killane's Files/General/B - Uncompleted Coding Projects/C++/Qt/Multiplayer Game/MultiplayerGame/CommunicationServer.h')": SyntaxError: Expected token `)'

//#endif // Error in " Cpp.headerGuard('C:/Oliver Killane's Files/General/B - Uncompleted Coding Projects/C++/Qt/Multiplayer Game/MultiplayerGame/CommunicationServer.h')": SyntaxError: Expected token `)'

#include <QObject>
#include <QString>
#include <QColor>
#include <QList>
#include <QTcpServer>
#include <QTcpSocket>
#include <QThread>

typedef struct data {
    int type;
    int param1;
    int param2;
    int param3;
    int param4;
    QString param5;
} GameData;

// Creating Commthread class to handle sockets, avoiding complications of inheritance or multiple inheritance via nasty code duplication.
class CommThread : public QThread
{
    Q_OBJECT

public:
    CommThread(quintptr ID, QObject *parent = 0);
    void run();
    void closeconnection();

signals:
    void RecieveData(GameData data, CommThread *commthread);
    void ServerError(QAbstractSocket::SocketError socketError, CommThread *user);

public slots:
    void SendData(GameData data);

private slots:
    void ServerDataRecieved();
    void CatchError(QAbstractSocket::SocketError socketError);

private:
    qintptr socketDescriptor;
    QTcpSocket *socket;
};




// Server class, to handle new connections, create sockets to communicate with clients.
class CommunicationServer : public QTcpServer{
    Q_OBJECT

public:
    explicit CommunicationServer(QObject *parent = 0);
    void SetupServer(int game, int map, int maxplayers);

signals:
    void ServerError(QString errordescription);
    void ServerStarted();
    void NewConnection(CommThread *newclient);

public slots:
    void ShutdownServer();

protected:
    void incomingConnection(qintptr socketDescriptor);

private:
    QList<CommThread*> CommThreadList;
    int gamemode;
    int mapchosen;
    int maxplayers;
};
