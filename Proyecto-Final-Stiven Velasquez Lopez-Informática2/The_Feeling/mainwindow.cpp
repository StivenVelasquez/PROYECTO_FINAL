#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QString nombre;
    nombre= "BaseDeDatos.sqlite";
    dbmain=QSqlDatabase::addDatabase("QSQLITE");
    dbmain.setDatabaseName(nombre);
    if(dbmain.open())
        {
            qDebug()<<"Base de datos creada"<<endl;
        }

    else
        qDebug()<<"Error"<<endl;

    InicializarEscenadeJuego();
}

void MainWindow::InicializarEscenadeJuego(){
    scene = new QGraphicsScene;//Se crea la escena del juego
    scene->setSceneRect(-200,-200,400,400);//Se delimita la escena
    ui->graphicsView->setStyleSheet("background-color:black");//Para color del graphicsView
    ui->graphicsView->setScene(scene); //Se muestra en el view
    ui->graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);//Para quitar barra Horizontal
    ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);//Para quitar barra vertical
}

MainWindow::~MainWindow()//Destructor
{
    delete ui;
    delete scene;
}

void MainWindow::on_pushButton_clicked()
{

    Registrar *registro = new Registrar(0);
    registro->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    Login *login =new Login(0);
    login->show();
}
