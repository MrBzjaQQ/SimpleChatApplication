#ifndef ROOMCREATIONWINDOW_H
#define ROOMCREATIONWINDOW_H

#include <QDialog>

namespace Ui {
class RoomCreationWindow;
}

class RoomCreationWindow : public QDialog
{
    Q_OBJECT

public:
    explicit RoomCreationWindow(QWidget *parent = 0);
    ~RoomCreationWindow();

private:
    Ui::RoomCreationWindow *ui;
public slots:
    void CloseClicked();
    void CreateClicked();
};

#endif // ROOMCREATIONWINDOW_H
