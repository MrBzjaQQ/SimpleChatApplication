#include "roomcreationwindow.h"
#include "ui_roomcreationwindow.h"

RoomCreationWindow::RoomCreationWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RoomCreationWindow)
{
    ui->setupUi(this);
    connect(ui->createButton, SIGNAL(clicked(bool)), this, SLOT(CreateClicked()));
    connect(ui->closeButton, SIGNAL(clicked(bool)), this, SLOT(CloseClicked()));
}

RoomCreationWindow::~RoomCreationWindow()
{
    delete ui;
}

void RoomCreationWindow::CloseClicked()
{
    if (this->close())
        this->~RoomCreationWindow();
}

void RoomCreationWindow::CreateClicked()
{
    ui->createButton->setEnabled(false);
}
