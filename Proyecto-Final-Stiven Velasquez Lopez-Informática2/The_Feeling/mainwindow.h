#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include "QtSql/QSqlDatabase"
#include "QtSql/qsqlquery.h"
#include <QtSql/QSqlError>
#include <QtSql/QSqlQuery>
#include "login.h"
#include "registrar.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
     void on_pushButton_clicked();

     void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;

    QSqlDatabase dbmain;

    void InicializarEscenadeJuego();
};
#endif // MAINWINDOW_H
