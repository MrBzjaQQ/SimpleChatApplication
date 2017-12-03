#include "chatwindow.h"
#include "ui_chatwindow.h"
#include "connecttothechat.h"
#include "roomcreationwindow.h"
#include "aboutuserinformation.h"
ChatWindow::ChatWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ChatWindow)
{
    ui->setupUi(this);
    connect(ui->actionConnect_to_the_room, SIGNAL(triggered(bool)), this, SLOT(OpenConnectDialog()));
    connect(ui->actionDisconnect_from_the_room, SIGNAL(triggered(bool)), this, SLOT(DisconnectFromChat()));
    connect(ui->actionClear_history, SIGNAL(triggered(bool)), this, SLOT(ClearHistory()));
    connect(ui->actionInformation_about_you, SIGNAL(triggered(bool)), this, SLOT(OpenInformationAboutYou()));
    connect(ui->actionCreate_room, SIGNAL(triggered(bool)), this, SLOT(CreateRoom()));
    OpenConnectDialog();
}

ChatWindow::~ChatWindow()
{
    delete ui;
}

void ChatWindow::OpenConnectDialog()
{
    ConnectToTheChat *connect = new ConnectToTheChat(this);
    connect->show();
    //Collect Info and start client connection
}

void ChatWindow::DisconnectFromChat()
{
    ClearHistory();
    ui->messageBox->setReadOnly(true);
}

void ChatWindow::ClearHistory()
{
    ui->chatHistory->clear();
    ui->chatHistory->setText("Starting your history.\n");
}

void ChatWindow::OpenInformationAboutYou()
{
    AboutUserInformation *info = new AboutUserInformation(this);
    info->show();
}

void ChatWindow::CreateRoom()
{
    RoomCreationWindow *room = new RoomCreationWindow(this);
    room->show();
    //Open Server
}
