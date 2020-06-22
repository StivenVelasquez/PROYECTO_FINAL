#include "login.h"
#include "ui_login.h"
#include <QDebug>

Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    setStyleSheet("background-color:black");//Para color
}

Login::~Login()
{
    delete ui;
}

void Login::on_commandLinkButton_clicked()
{
    QString user=ui->Usuario->text();
    QString password=ui->Contrasena->text();

    string jugador,Contra;

    //Se convierten los Qstring a String
    jugador=user.toStdString();
    Contra=password.toStdString();

    //Declaracion de variables
    ifstream lectura;
    bool encontrado_=false;
    string auxNombre;

    lectura.open("JUGADORES.txt",ios::in);

    if(lectura.is_open()){

       while(!lectura.eof()){
           lectura>>auxNombre;
           if(auxNombre==jugador){
               encontrado_=true;

          lectura>>auxNombre;

           }
     }
    }

    else
     {
              qDebug()<<"--No se pudo abrir el Archivo o aun no ha sido Creado--"<<endl;

             }

     if(encontrado_==false){

         //Para que aparezca mensaje en pantalla
         QMessageBox msgBox;
         msgBox.setText("No Existe ningún Registro con este Usuario, por favor Registrese");
         msgBox.exec();

             }
     lectura.close();
}
