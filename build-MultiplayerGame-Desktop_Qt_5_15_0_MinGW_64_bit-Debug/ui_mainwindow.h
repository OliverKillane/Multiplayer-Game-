/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *OpenScreen;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QPushButton *join;
    QPushButton *host;
    QPushButton *credits;
    QWidget *CreditsScreen;
    QVBoxLayout *verticalLayout_5;
    QLabel *title;
    QLabel *about;
    QPushButton *Return;
    QWidget *HostStartScreen;
    QVBoxLayout *verticalLayout_8;
    QLabel *title_3;
    QGridLayout *gridLayout;
    QLabel *maplabel;
    QComboBox *gamemode;
    QLabel *gamemodelabel;
    QComboBox *map;
    QLabel *maxplayerslabel;
    QVBoxLayout *verticalLayout_10;
    QLabel *maxplayersshown;
    QSlider *maxplayers;
    QPushButton *startgame;
    QPushButton *return_2;
    QWidget *HostScreen;
    QVBoxLayout *vboxLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *title_2;
    QLabel *label_2;
    QPushButton *Return_2;
    QWidget *JoinScreen;
    QVBoxLayout *verticalLayout_2;
    QLabel *Title;
    QLineEdit *EnterName;
    QPushButton *SelectColour;
    QLineEdit *EnterIP;
    QPushButton *JoinServer;
    QPushButton *Return_3;
    QWidget *ConnectingScreen;
    QVBoxLayout *verticalLayout_6;
    QLabel *loadinglabel;
    QPushButton *CancelConnection;
    QWidget *GameScreen;
    QVBoxLayout *verticalLayout_4;
    QGraphicsView *graphicsView;
    QWidget *ErrorScreen;
    QVBoxLayout *verticalLayout_7;
    QLabel *ErrorMessage;
    QPushButton *MenuReturn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        OpenScreen = new QWidget();
        OpenScreen->setObjectName(QString::fromUtf8("OpenScreen"));
        verticalLayout = new QVBoxLayout(OpenScreen);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(OpenScreen);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Rockwell"));
        font.setPointSize(26);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        join = new QPushButton(OpenScreen);
        join->setObjectName(QString::fromUtf8("join"));

        horizontalLayout->addWidget(join);

        host = new QPushButton(OpenScreen);
        host->setObjectName(QString::fromUtf8("host"));

        horizontalLayout->addWidget(host);

        credits = new QPushButton(OpenScreen);
        credits->setObjectName(QString::fromUtf8("credits"));

        horizontalLayout->addWidget(credits);


        verticalLayout->addLayout(horizontalLayout);

        stackedWidget->addWidget(OpenScreen);
        CreditsScreen = new QWidget();
        CreditsScreen->setObjectName(QString::fromUtf8("CreditsScreen"));
        verticalLayout_5 = new QVBoxLayout(CreditsScreen);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        title = new QLabel(CreditsScreen);
        title->setObjectName(QString::fromUtf8("title"));
        title->setFont(font);
        title->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(title);

        about = new QLabel(CreditsScreen);
        about->setObjectName(QString::fromUtf8("about"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Rockwell"));
        font1.setBold(true);
        font1.setWeight(75);
        about->setFont(font1);
        about->setAlignment(Qt::AlignCenter);
        about->setWordWrap(true);

        verticalLayout_5->addWidget(about);

        Return = new QPushButton(CreditsScreen);
        Return->setObjectName(QString::fromUtf8("Return"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Rockwell"));
        font2.setBold(true);
        font2.setWeight(75);
        font2.setStrikeOut(false);
        Return->setFont(font2);
        Return->setMouseTracking(false);
        Return->setAutoFillBackground(false);
        Return->setFlat(false);

        verticalLayout_5->addWidget(Return);

        stackedWidget->addWidget(CreditsScreen);
        HostStartScreen = new QWidget();
        HostStartScreen->setObjectName(QString::fromUtf8("HostStartScreen"));
        verticalLayout_8 = new QVBoxLayout(HostStartScreen);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        title_3 = new QLabel(HostStartScreen);
        title_3->setObjectName(QString::fromUtf8("title_3"));
        title_3->setFont(font);
        title_3->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(title_3);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        maplabel = new QLabel(HostStartScreen);
        maplabel->setObjectName(QString::fromUtf8("maplabel"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Rockwell"));
        maplabel->setFont(font3);

        gridLayout->addWidget(maplabel, 3, 0, 1, 1);

        gamemode = new QComboBox(HostStartScreen);
        gamemode->setObjectName(QString::fromUtf8("gamemode"));

        gridLayout->addWidget(gamemode, 2, 2, 1, 1);

        gamemodelabel = new QLabel(HostStartScreen);
        gamemodelabel->setObjectName(QString::fromUtf8("gamemodelabel"));
        gamemodelabel->setFont(font3);

        gridLayout->addWidget(gamemodelabel, 2, 0, 1, 1);

        map = new QComboBox(HostStartScreen);
        map->setObjectName(QString::fromUtf8("map"));

        gridLayout->addWidget(map, 3, 2, 1, 1);

        maxplayerslabel = new QLabel(HostStartScreen);
        maxplayerslabel->setObjectName(QString::fromUtf8("maxplayerslabel"));
        maxplayerslabel->setFont(font3);

        gridLayout->addWidget(maxplayerslabel, 1, 0, 1, 1);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        maxplayersshown = new QLabel(HostStartScreen);
        maxplayersshown->setObjectName(QString::fromUtf8("maxplayersshown"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Rockwell"));
        font4.setPointSize(12);
        maxplayersshown->setFont(font4);
        maxplayersshown->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_10->addWidget(maxplayersshown);

        maxplayers = new QSlider(HostStartScreen);
        maxplayers->setObjectName(QString::fromUtf8("maxplayers"));
        maxplayers->setMinimum(5);
        maxplayers->setMaximum(30);
        maxplayers->setPageStep(10);
        maxplayers->setSliderPosition(5);
        maxplayers->setOrientation(Qt::Horizontal);
        maxplayers->setTickPosition(QSlider::TicksBelow);
        maxplayers->setTickInterval(1);

        verticalLayout_10->addWidget(maxplayers);


        gridLayout->addLayout(verticalLayout_10, 1, 2, 1, 1);


        verticalLayout_8->addLayout(gridLayout);

        startgame = new QPushButton(HostStartScreen);
        startgame->setObjectName(QString::fromUtf8("startgame"));
        startgame->setFont(font3);

        verticalLayout_8->addWidget(startgame);

        return_2 = new QPushButton(HostStartScreen);
        return_2->setObjectName(QString::fromUtf8("return_2"));

        verticalLayout_8->addWidget(return_2);

        stackedWidget->addWidget(HostStartScreen);
        HostScreen = new QWidget();
        HostScreen->setObjectName(QString::fromUtf8("HostScreen"));
        vboxLayout = new QVBoxLayout(HostScreen);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        title_2 = new QLabel(HostScreen);
        title_2->setObjectName(QString::fromUtf8("title_2"));
        title_2->setFont(font);
        title_2->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(title_2);

        label_2 = new QLabel(HostScreen);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_3->addWidget(label_2);

        Return_2 = new QPushButton(HostScreen);
        Return_2->setObjectName(QString::fromUtf8("Return_2"));

        verticalLayout_3->addWidget(Return_2);


        vboxLayout->addLayout(verticalLayout_3);

        stackedWidget->addWidget(HostScreen);
        JoinScreen = new QWidget();
        JoinScreen->setObjectName(QString::fromUtf8("JoinScreen"));
        verticalLayout_2 = new QVBoxLayout(JoinScreen);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        Title = new QLabel(JoinScreen);
        Title->setObjectName(QString::fromUtf8("Title"));
        Title->setFont(font);
        Title->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(Title);

        EnterName = new QLineEdit(JoinScreen);
        EnterName->setObjectName(QString::fromUtf8("EnterName"));
        EnterName->setFont(font3);
        EnterName->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(EnterName);

        SelectColour = new QPushButton(JoinScreen);
        SelectColour->setObjectName(QString::fromUtf8("SelectColour"));
        SelectColour->setFont(font3);
        SelectColour->setAutoFillBackground(true);
        SelectColour->setFlat(true);

        verticalLayout_2->addWidget(SelectColour);

        EnterIP = new QLineEdit(JoinScreen);
        EnterIP->setObjectName(QString::fromUtf8("EnterIP"));
        EnterIP->setFont(font3);
        EnterIP->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(EnterIP);

        JoinServer = new QPushButton(JoinScreen);
        JoinServer->setObjectName(QString::fromUtf8("JoinServer"));
        JoinServer->setFont(font3);

        verticalLayout_2->addWidget(JoinServer);

        Return_3 = new QPushButton(JoinScreen);
        Return_3->setObjectName(QString::fromUtf8("Return_3"));

        verticalLayout_2->addWidget(Return_3);

        stackedWidget->addWidget(JoinScreen);
        ConnectingScreen = new QWidget();
        ConnectingScreen->setObjectName(QString::fromUtf8("ConnectingScreen"));
        verticalLayout_6 = new QVBoxLayout(ConnectingScreen);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        loadinglabel = new QLabel(ConnectingScreen);
        loadinglabel->setObjectName(QString::fromUtf8("loadinglabel"));
        loadinglabel->setFont(font);
        loadinglabel->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(loadinglabel);

        CancelConnection = new QPushButton(ConnectingScreen);
        CancelConnection->setObjectName(QString::fromUtf8("CancelConnection"));
        CancelConnection->setFont(font3);
        CancelConnection->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));

        verticalLayout_6->addWidget(CancelConnection);

        stackedWidget->addWidget(ConnectingScreen);
        GameScreen = new QWidget();
        GameScreen->setObjectName(QString::fromUtf8("GameScreen"));
        verticalLayout_4 = new QVBoxLayout(GameScreen);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        graphicsView = new QGraphicsView(GameScreen);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));

        verticalLayout_4->addWidget(graphicsView);

        stackedWidget->addWidget(GameScreen);
        ErrorScreen = new QWidget();
        ErrorScreen->setObjectName(QString::fromUtf8("ErrorScreen"));
        verticalLayout_7 = new QVBoxLayout(ErrorScreen);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        ErrorMessage = new QLabel(ErrorScreen);
        ErrorMessage->setObjectName(QString::fromUtf8("ErrorMessage"));

        verticalLayout_7->addWidget(ErrorMessage);

        MenuReturn = new QPushButton(ErrorScreen);
        MenuReturn->setObjectName(QString::fromUtf8("MenuReturn"));

        verticalLayout_7->addWidget(MenuReturn);

        stackedWidget->addWidget(ErrorScreen);

        horizontalLayout_2->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(7);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "MultiplayerGame++", nullptr));
        join->setText(QCoreApplication::translate("MainWindow", "Join", nullptr));
        host->setText(QCoreApplication::translate("MainWindow", "Host", nullptr));
        credits->setText(QCoreApplication::translate("MainWindow", "Credits", nullptr));
        title->setText(QCoreApplication::translate("MainWindow", "About MultiplayerGame++", nullptr));
        about->setText(QCoreApplication::translate("MainWindow", "Originally created in python as a mock NEA for Alevel Computer science. By Oliver Killane.", nullptr));
        Return->setText(QCoreApplication::translate("MainWindow", "Return", nullptr));
        title_3->setText(QCoreApplication::translate("MainWindow", "Select game type.", nullptr));
        maplabel->setText(QCoreApplication::translate("MainWindow", "Map", nullptr));
        gamemodelabel->setText(QCoreApplication::translate("MainWindow", "Game Mode", nullptr));
        maxplayerslabel->setText(QCoreApplication::translate("MainWindow", "Max Players", nullptr));
        maxplayersshown->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        startgame->setText(QCoreApplication::translate("MainWindow", "Start Game", nullptr));
        return_2->setText(QCoreApplication::translate("MainWindow", "Return", nullptr));
        title_2->setText(QCoreApplication::translate("MainWindow", "Host", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Host info", nullptr));
        Return_2->setText(QCoreApplication::translate("MainWindow", "Return", nullptr));
        Title->setText(QCoreApplication::translate("MainWindow", "Join a Game", nullptr));
        EnterName->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter Name", nullptr));
        SelectColour->setText(QCoreApplication::translate("MainWindow", "Select Colour", nullptr));
        EnterIP->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter IP Address", nullptr));
        JoinServer->setText(QCoreApplication::translate("MainWindow", "Join Server", nullptr));
        Return_3->setText(QCoreApplication::translate("MainWindow", "Return", nullptr));
        loadinglabel->setText(QCoreApplication::translate("MainWindow", "Loading...", nullptr));
        CancelConnection->setText(QCoreApplication::translate("MainWindow", "Cancel", nullptr));
        ErrorMessage->setText(QCoreApplication::translate("MainWindow", "An Error has occured, unable to continue connection to server.", nullptr));
        MenuReturn->setText(QCoreApplication::translate("MainWindow", "RETURN TO MAIN MENU", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
