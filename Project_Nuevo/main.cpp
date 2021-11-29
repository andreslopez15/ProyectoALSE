#include <iostream>
#include "db_local.h"
#include <iostream>
#include <unistd.h>

using namespace std;

int main()
{
    int frecuencia=5;
    double temperatura, humedad, direccion_del_viento, precipitacion,velocidad_del_viento, intensidad_de_la_luz;
    if(frecuencia<5||frecuencia>20){
        cout<< "La frecuencia debe de estar entre 5 y 20";
        return (0);
    }
    DB_Local Base_de_datos("test.db");
    Base_de_datos.abrir_DB();
    //while(true){
       // sleep(frecuencia);
        //Base_de_datos.Guardar_datos_sensores(temperatura, humedad, direccion_del_viento,precipitacion, velocidad_del_viento, intensidad_de_la_luz);
    //}
    std::cout << Base_de_datos.guardarmedicion("temperatura", 56.89, 58.88, 63.77 ) << std::endl;

    //double minimo, maximo, promedio;
    //Base_de_datos.recuperarmedicion( minimo, promedio, maximo );

    //std:: cout << "Minimo: " << mi << ", Promedio: " << pro << ", Máximo: " << ma << std::endl;
    Base_de_datos.cerrar_DB();

    return 0;
}
