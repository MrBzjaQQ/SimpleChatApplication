#include "aboutuserinformation.h"
#include "ui_aboutuserinformation.h"

AboutUserInformation::AboutUserInformation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AboutUserInformation)
{
    ui->setupUi(this);
    connect(ui->applyButton, SIGNAL(clicked(bool)), this, SLOT(ApplyClicked()));
    connect(ui->closeButton, SIGNAL(clicked(bool)), this, SLOT(CloseClicked()));
}

AboutUserInformation::~AboutUserInformation()
{
    delete ui;
}

void AboutUserInformation::AcceptClicked()
{

}

void AboutUserInformation::CloseClicked()
{
    if (this->close())
        this->~AboutUserInformation();
}
