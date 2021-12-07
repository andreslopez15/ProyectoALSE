#include "informacion_base_de_datos.h"
#include "ui_informacion_base_de_datos.h"

Informacion_base_de_datos::Informacion_base_de_datos(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Informacion_base_de_datos)
{
    ui->setupUi(this);
}

Informacion_base_de_datos::~Informacion_base_de_datos()
{
    delete ui;
}
