#include "informacion_base_de_datos.h"
#include "ui_informacion_base_de_datos.h"
#include "db_local.h"
#include <iostream>

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

void Informacion_base_de_datos::on_Recuperar_medida_clicked()
{
    double temphoydb,humedadhoydb,tempayerdb,humedadayerdb;
    std::string fechahoydb,fechaayerdb;

    std::string temperatura, humedad, direccion_viento, velocidad_viento, precipitacion, intensidad_luz;
    double minimo[6] = {0., 0., 0., 0., 0., 0.};
    double maximo [6] = {0., 0., 0., 0., 0., 0.};
    double promedio [6] = {0., 0., 0., 0., 0., 0.};

    DB_Local Base_de_datos("test.db");
    Base_de_datos.abrir_DB();
    Base_de_datos.recuperarmedicion("temperatura", minimo[0],promedio[0],maximo[0]);
    Base_de_datos.recuperarmedicion("humedad", minimo[1],promedio[1],maximo[1]);
    Base_de_datos.recuperarmedicion("direccion_viento", minimo[2],promedio[2],maximo[2]);
    Base_de_datos.recuperarmedicion("precipitacion", minimo[3],promedio[3],maximo[3]);
    Base_de_datos.recuperarmedicion("velocidad_viento", minimo[4],promedio[4],maximo[4]);
    Base_de_datos.recuperarmedicion("intensidad_luz", minimo[5],promedio[5],maximo[5]);
    Base_de_datos.cerrar_DB();

    //Temperatura
    ui-> TempMax -> setText(QString().sprintf("%.2f °C" ,maximo[0]));
    ui-> TempMin -> setText(QString().sprintf("%.2f °C" ,minimo[0]));
    ui-> TempProm -> setText(QString().sprintf("%.2f °C" ,promedio[0]));

    //Humedad
    ui-> HumedadMax -> setText(QString().sprintf("%.2f %%" ,maximo[1]));
    ui-> HumedadMin -> setText(QString().sprintf("%.2f %%" ,minimo[1]));
    ui-> HumedadProm -> setText(QString().sprintf("%.2f %%" ,promedio[1]));

    //Dirección del viento
    ui-> DireccionVMax -> setText(QString().sprintf("%.2f °N" ,maximo[2]));
    ui-> DireccionVMin -> setText(QString().sprintf("%.2f °N" ,minimo[2]));
    ui-> DireccionVProm -> setText(QString().sprintf("%.2f °N" ,promedio[2]));

    //Velocidad del viento
    ui-> VelocidadVMax -> setText(QString().sprintf("%.2f m/s" ,maximo[4]));
    ui-> VelocidadVMin -> setText(QString().sprintf("%.2f m/s" ,minimo[4]));
    ui-> VelocidadVProm -> setText(QString().sprintf("%.2f m/s" ,promedio[4]));

    //Precipitacion
    ui-> PrecipitacionMax -> setText(QString().sprintf("%.2f mm" ,maximo[3]));
    ui-> PrecipitacionMin -> setText(QString().sprintf("%.2f mm" ,minimo[3]));
    ui-> PrecipitacionProm -> setText(QString().sprintf("%.2f mm" ,promedio[3]));


    //Intensidad de luz
    ui-> IntensidadLMax -> setText(QString().sprintf("%.0f lumen" ,maximo[5]));
    ui-> IntensidadLMin -> setText(QString().sprintf("%.0f lumen" ,minimo[5]));
    ui-> IntensidadLProm -> setText(QString().sprintf("%.0f lumen" ,promedio[5]));
    
    Base_de_datos.abrir_DB();
    int res = Base_de_datos.alerta_recuperar(fechahoydb,temphoydb, humedadhoydb, fechaayerdb, tempayerdb, humedadayerdb);
    Base_de_datos.cerrar_DB();
    
    if(res==2){
        ui->alerta-> setStyleSheet("background-color: red");
    }
    if(res==1){
        ui->alerta-> setStyleSheet("background-color: yellow");
    }
    if(res==0){
        ui->alerta-> setStyleSheet("background-color: green");
    }

}







