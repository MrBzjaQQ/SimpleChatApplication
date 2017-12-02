#ifndef CONNECTTOTHECHAT_H
#define CONNECTTOTHECHAT_H

#include <QDialog>

namespace Ui {
class ConnectToTheChat;
}

class ConnectToTheChat : public QDialog
{
    Q_OBJECT

public:
    explicit ConnectToTheChat(QWidget *parent = 0);
    ~ConnectToTheChat();

private:
    Ui::ConnectToTheChat *ui;

public slots:
    void ConnectClicked();
    void CloseClicked();
};

#endif // CONNECTTOTHECHAT_H
