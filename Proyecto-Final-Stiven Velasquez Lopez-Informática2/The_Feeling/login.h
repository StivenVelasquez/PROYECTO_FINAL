#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <QDebug>
#include <fstream>
#include <iostream>
#include <QMessageBox>
#include <iomanip>

using namespace std;

namespace Ui {
class Login;
}

class Login : public QWidget
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_commandLinkButton_clicked();

private:
    Ui::Login *ui;
};

#endif // LOGIN_H
