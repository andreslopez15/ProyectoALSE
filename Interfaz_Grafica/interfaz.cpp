#include "interfaz.h"
#include "./ui_interfaz.h"
#include "informacion_base_de_datos.h"

Interfaz::Interfaz(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Interfaz)
{
    ui->setupUi(this);
}

Interfaz::~Interfaz()
{
    delete ui;
}


void Interfaz::on_RegistrarBtn_clicked()
{
    Registro * PantallaRegistro = new Registro;
    PantallaRegistro -> show();
    close();
}


void Interfaz::on_IngresarBtn_clicked()
{
    std::string NombreTxt, ApellidoTxt, DocumentoTxt, ContraseniaTxt,Contrasenia_DBTxT, FechaEdit, UsuarioTxt;
    UsuarioTxt = ui -> UsuarioTxt -> text().toStdString();
    ContraseniaTxt = ui -> ContraseniaTxt -> text().toStdString();
    DB_Local Base_de_datos("test.db");
    Base_de_datos.abrir_DB();
    Base_de_datos.recuperar_usuario(NombreTxt, ApellidoTxt, DocumentoTxt, FechaEdit, UsuarioTxt, Contrasenia_DBTxT);

    if(ContraseniaTxt != Contrasenia_DBTxT)
    {
        QMessageBox::warning(
            this,
            tr("Error"),
            tr("Contraseña Incorrecta"));
    }
    else
    {

    QMessageBox::information(
        this,
        tr("Éxito"),
        tr("Inicio de sesión exitoso") );
    Informacion_base_de_datos * PantallaInformacion_DB = new Informacion_base_de_datos;
    PantallaInformacion_DB -> show();
    close();
    }
}
