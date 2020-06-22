#include "mododejuego.h"
#include "ui_mododejuego.h"

ModoDeJuego::ModoDeJuego(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ModoDeJuego)
{
    ui->setupUi(this);
}

ModoDeJuego::~ModoDeJuego()
{
    delete ui;
}
