#ifndef REGISTRAR_H
#define REGISTRAR_H

#include <QDebug>
#include <fstream>
#include <iostream>
#include <QMessageBox>
#include <iomanip>
#include <QWidget>

using namespace std;

namespace Ui {
class Registrar;
}

class Registrar : public QWidget
{
    Q_OBJECT

public:
    explicit Registrar(QWidget *parent = nullptr);
    ~Registrar();

private slots:

    void on_commandLinkButton_clicked();

private:
    Ui::Registrar *ui;
};

#endif // REGISTRAR_H
