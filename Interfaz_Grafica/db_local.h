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
    bool recuperarmedicion(std::string Tipo_sensor, double &min, double &prom, double &max );

    bool registro_usuario(std::string nombre,std::string apellido, std::string documento, std::string fecha,std::string user_name, std::string psswd);
    bool recuperar_usuario(std::string &nombre,std::string &apellido, std::string &documento, std::string &fecha, std::string &user_name, std::string &psswd);

    bool alerta_guardar(double temperatura, double humedad);
    int alerta_recuperar(std::string fechahoy,double &temperaturahoy, double &humedadhoy,std::string fechaayer,double &temperaturaayer, double &humedadayer);

private:
    DB_Local();
    sqlite3         *_db;
    std::string     _url;
    static int rellenar_numeros(void* data, int argc, char* argv[], char* campos[] );
    static int rellenar_string(void* data, int argc, char* argv[], char* campos[] );
};

#endif // DB_LOCAL_H
