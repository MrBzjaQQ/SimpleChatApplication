#ifndef ABOUTUSERINFORMATION_H
#define ABOUTUSERINFORMATION_H

#include <QDialog>

namespace Ui {
class AboutUserInformation;
}

class AboutUserInformation : public QDialog
{
    Q_OBJECT

public:
    explicit AboutUserInformation(QWidget *parent = 0);
    ~AboutUserInformation();

private:
    Ui::AboutUserInformation *ui;
public slots:
    void AcceptClicked();
    void CloseClicked();
};

#endif // ABOUTUSERINFORMATION_H
