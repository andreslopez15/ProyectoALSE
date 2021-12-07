#include "registro.h"
#include "ui_registro.h"
#include <iostream>
#include "interfaz.h"


Registro::Registro(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Registro)
{
    ui->setupUi(this);
}

Registro::~Registro()
{
    delete ui;
}

void Registro::on_RegistrarBtn_clicked()
{
    std::string NombreTxt, ApellidoTxt, DocumentoTxt, ContraseniaTxt, ConfirmaContraseniaTxt, FechaEdit, UsuarioTxt;
     NombreTxt = ui -> NombreTxt -> text().toStdString();
     ApellidoTxt = ui -> ApellidoTxt -> text().toStdString();
     ContraseniaTxt = ui -> ContraseniaTxt -> text().toStdString();
     ConfirmaContraseniaTxt = ui -> ConfirmaContraseniaTxt -> text().toStdString();
     FechaEdit = ui -> FechaEdit -> date().toString("dd-mm-yyyy").toStdString();
     DocumentoTxt = ui -> DocumentoTxt -> text().toStdString();
     UsuarioTxt = ui -> UsuarioTxt -> text().toStdString();
     DB_Local Base_de_datos("test.db");
     if(ContraseniaTxt != ConfirmaContraseniaTxt)
     {
         QMessageBox::warning(
             this,
             tr("Error"),
             tr("Las contraseñas no coinciden"));
     }
     else
     {

     Base_de_datos.abrir_DB();
     Base_de_datos.registro_usuario(NombreTxt, ApellidoTxt, DocumentoTxt, FechaEdit, UsuarioTxt, ContraseniaTxt);
     Base_de_datos.cerrar_DB();
     QMessageBox::information(
         this,
         tr("Registro exitoso"),
         tr("Usted se ha registrado satisfactoriamente :D") );
     Interfaz * PantallaInterfaz = new Interfaz;
     PantallaInterfaz -> show();
     close();
     }
     }

