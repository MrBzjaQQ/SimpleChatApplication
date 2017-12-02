#include "connecttothechat.h"
#include "ui_connecttothechat.h"

ConnectToTheChat::ConnectToTheChat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ConnectToTheChat)
{
    ui->setupUi(this);
    connect(ui->closeButton, SIGNAL(clicked(bool)), this, SLOT(CloseClicked()));
    connect(ui->connectButton, SIGNAL(clicked(bool)), this, SLOT(ConnectClicked()));
}

ConnectToTheChat::~ConnectToTheChat()
{
    delete ui;
}

void ConnectToTheChat::ConnectClicked()
{
    ui->connectButton->setEnabled(false);
}

void ConnectToTheChat::CloseClicked()
{
    if(this->close())
        this->~ConnectToTheChat();
}
