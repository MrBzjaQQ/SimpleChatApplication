#ifndef CHATWINDOW_H
#define CHATWINDOW_H

#include <QMainWindow>

namespace Ui {
class ChatWindow;
}

class ChatWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ChatWindow(QWidget *parent = 0);
    ~ChatWindow();

private:
    Ui::ChatWindow *ui;
public slots:
    void OpenConnectDialog();
    void DisconnectFromChat();
    void ClearHistory();
    void OpenInformationAboutYou();
    void CreateRoom();
};

#endif // CHATWINDOW_H
