#ifndef DB_LOCAL_H
#define DB_LOCAL_H
#include <string>
#include <sqlite3.h>

class DB_Local{

public:
    DB_Local(std::string path);
    int CREAR_TABLA(std::string sqlstr);
    bool Guardar_datos_sensores( double temperatura, double humedad, double direccion_del_viento, double precipitacion, double velocidad_del_viento, double intensidad_de_la_luz);
    bool abrir_DB();
    bool cerrar_DB();
    bool guardarmedicion(std::string Tipo_sensor, double min, double prom, double max );
    bool recuperarmedicion(std::string &Tipo_sensor, double &min, double &prom, double &max );


private:
    DB_Local();
    sqlite3         *_db;
    std::string     _url;
    static int rellenar(void* data, int argc, char* argv[], char* campos[] );
};

#endif // DB_LOCAL_H
