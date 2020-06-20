#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    InicializarEscenadeJuego();
}

void MainWindow::InicializarEscenadeJuego(){
    scene = new QGraphicsScene;//Se crea la escena del juego
    scene->setSceneRect(-200,-200,400,400);//Se delimita la escena
    ui->graphicsView->setScene(scene); //Se muestra en el view
}

MainWindow::~MainWindow()//Destructor
{
    delete ui;
    delete scene;
}

