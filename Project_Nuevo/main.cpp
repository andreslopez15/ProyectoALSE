#include <iostream>
#include "db_local.h"
#include <unistd.h>
#include <sstream>

using namespace std;

double valor_aleatorio(double min, double max){

    srand (time(NULL));
    double f = (double)rand()/ RAND_MAX;
    return min + f*(max-min);
}

void actualizar_mediciones(double &minimo, double &maximo, double &promedio, double dato, int &segundos){
    if(segundos == 0){
        maximo = dato;
        minimo = dato;
    }
    if(dato<minimo){
        minimo = dato;
    }
    if(dato>maximo){
        maximo = dato;
    }

    promedio+=dato;
}


void alerta_temprana(double temperatura, double humedad){
    double temphoydb,humedadhoydb,tempayerdb,humedadayerdb;
    string fechahoydb,fechaayerdb;

    //Alerta amarilla
    if(temperatura<10 && humedad>80){
        DB_Local Base_de_datos("test.db");
        Base_de_datos.abrir_DB();
        Base_de_datos.alerta_guardar(temperatura, humedad);
        int res = Base_de_datos.alerta_recuperar(fechahoydb,temphoydb, humedadhoydb, fechaayerdb,
                                                tempayerdb, humedadayerdb);


        //Alerta roja
        if(res == 2){
         cout << "Se detecto el hongo en la papa" ;
        }

    }
}


int main(int argc, char* argv[] )
{
    //declaración de variables
    int frecuencia=5;
    int segundos=0;
    int minutos=0;
    double minimo[6] = {0., 0., 0., 0., 0., 0.};
    double maximo [6] = {0., 0., 0., 0., 0., 0.};
    double promedio [6] = {0., 0., 0., 0., 0., 0.};
    double temperatura, humedad, direccion_del_viento, precipitacion,velocidad_del_viento, intensidad_de_la_luz;
    std::stringstream log;
    std::string usuario, contrasenia;
    std::string NombreTxt, ApellidoTxt, DocumentoTxt,Contrasenia_DBTxT, FechaEdit;

    if(argc != 4){
        cout<<"Numero de parametros incorrecto, el comando esperado es:"<< endl;
        cout << "./Proyecto_F [USER_NAME] [PASSWORD] [FRECUENCIA]" << endl;
        return 0;
    }

    usuario = argv[1];
    contrasenia = argv[2];
    frecuencia = atoi(argv[3]);

    //inicializar BD
    DB_Local Base_de_datos("../Interfaz_Grafica/test.db");



    Base_de_datos.abrir_DB();
    Base_de_datos.recuperar_usuario(NombreTxt, ApellidoTxt, DocumentoTxt, FechaEdit, usuario, Contrasenia_DBTxT);


    if(contrasenia != Contrasenia_DBTxT)
    {

        cout<< "Contraseña incorrecta"<< endl;
        return 0;
    }

    Base_de_datos.guardar_usuariorg(usuario);



    if(frecuencia<5||frecuencia>20){
        cout<< "ERROR: La frecuencia debe de estar entre 5 y 20" << endl;
        return (0);
    }


    while(true){

       //generar valores aleatorios
       temperatura = valor_aleatorio(-10, 45);
       humedad= valor_aleatorio(0, 100);
       direccion_del_viento= valor_aleatorio(-180, 180);
       precipitacion = valor_aleatorio(0, 50);
       velocidad_del_viento = valor_aleatorio(0, 40);
       intensidad_de_la_luz = valor_aleatorio(0, 2000);

       //actualizar min, max y prom
       actualizar_mediciones(minimo[0],maximo[0], promedio[0], temperatura, segundos);
       actualizar_mediciones(minimo[1],maximo[1], promedio[1], humedad, segundos);
       actualizar_mediciones(minimo[2],maximo[2], promedio[2], direccion_del_viento, segundos);
       actualizar_mediciones(minimo[3],maximo[3], promedio[3], precipitacion, segundos);
       actualizar_mediciones(minimo[4],maximo[4], promedio[4], velocidad_del_viento, segundos);
       actualizar_mediciones(minimo[5],maximo[5], promedio[5], intensidad_de_la_luz, segundos);

       //guardar datos sensores
       Base_de_datos.abrir_DB();
       Base_de_datos.Guardar_datos_sensores(temperatura, humedad, direccion_del_viento,precipitacion, velocidad_del_viento, intensidad_de_la_luz);
       Base_de_datos.cerrar_DB();
       log.str("");
       log << minutos << "m " << segundos << "s - Medición tomada" << endl ; 
       cout << log.str();
       //validar alerta temprana 
       alerta_temprana(temperatura, humedad);
    
       //detener aplicación
       sleep(frecuencia);
       segundos+=frecuencia;

       //validar que ha transcurrido 1 minuto 
       if(segundos+frecuencia > 60 ){
           int cantidad; //cantidad de mediciones
           segundos = 0;
           minutos +=1;
           cantidad = 60/frecuencia;
           
           //almacenar mínimo, promedio y máximo por cada tipo de sensor 
           log.str("");
           log << minutos << "m " << segundos << "s - Calcular min,max,prom" << endl ; 
           cout << log.str();

           Base_de_datos.abrir_DB();
           Base_de_datos.guardarmedicion("temperatura", minimo[0],promedio[0]/cantidad,maximo[0]);
           Base_de_datos.guardarmedicion("humedad", minimo[1],promedio[1]/cantidad,maximo[1]);
           Base_de_datos.guardarmedicion("direccion_viento", minimo[2],promedio[2]/cantidad,maximo[2]);
           Base_de_datos.guardarmedicion("precipitacion", minimo[3],promedio[3]/cantidad,maximo[3]);
           Base_de_datos.guardarmedicion("velocidad_viento", minimo[4],promedio[4]/cantidad,maximo[4]);
           Base_de_datos.guardarmedicion("intensidad_luz", minimo[5],promedio[5]/cantidad,maximo[5]);
           Base_de_datos.cerrar_DB();
       }
    }


    return 0;
}
