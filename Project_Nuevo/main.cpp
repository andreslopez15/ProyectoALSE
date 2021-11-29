#include <iostream>
#include "db_local.h"
#include <iostream>
#include <unistd.h>

using namespace std;

bool iniciar_sesion(string user_name, string psswd, DB_Local Base_de_datos );

int main()
{
    bool rcu;
    int frecuencia=5;
    double temperatura, humedad, direccion_del_viento, precipitacion,velocidad_del_viento, intensidad_de_la_luz;
    if(frecuencia<5||frecuencia>20){
        cout<< "La frecuencia debe de estar entre 5 y 20";
        return (0);
    }
    DB_Local Base_de_datos("test.db");    
    Base_de_datos.abrir_DB();

    //Base_de_datos.registro_usuario("Manolo","Sanchez","1234567890","13-04-1986","mansan1","123ms");
    rcu = iniciar_sesion("mansan1","123ms", Base_de_datos);
    if(rcu== true){
        std::cout<<"inicio sesión"<< std::endl;
    }
    else{
        std::cout<<"incorrecto:("<< std::endl;
    }

    //while(true){
       // sleep(frecuencia);
        //Base_de_datos.Guardar_datos_sensores(temperatura, humedad, direccion_del_viento,precipitacion, velocidad_del_viento, intensidad_de_la_luz);
    //}
   // std::cout << Base_de_datos.guardarmedicion("temperatura", 45.89, 78.88, 12.77 ) << std::endl;

    double minimo, maximo, promedio;
    string tipo = "temperatura";
    Base_de_datos.recuperarmedicion( tipo, minimo, promedio, maximo );

    std:: cout << "Minimo: " << minimo << ", Promedio: " << promedio << ", Máximo: " << maximo << std::endl;
    Base_de_datos.cerrar_DB();

    return 0;
}

bool iniciar_sesion(string user_name, string psswd, DB_Local Base_de_datos ){
    string nombre;
    string apellido;
    string documento;
    string fecha;
    string psswd_user = psswd;
    string psswd_db;

    bool rc;
    rc = Base_de_datos.recuperar_usuario(nombre,apellido,documento,fecha, user_name, psswd_db);

    std::cout << fecha  << std::endl;
     std::cout << psswd_user << std::endl ;
    if(rc == true){
        if(psswd_db == psswd_user) return true;
    }

    return false;
}





