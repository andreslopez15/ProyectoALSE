#ifndef DB_LOCAL_H
#define DB_LOCAL_H
#include <string>
#include <sqlite3.h>

class DB_Local{

public:
    DB_Local(std::string path);
    int CREAR_TABLA(std::string sqlstr);
    bool Guardar_datos_sensores( double temperatura, double humedad, double direccion_del_viento, double precipitacion, double velocidad_del_viento, double intensidad_de_la_luz);
    /*!
     * \brief rutina para abrir la conexion de la db y crear las tablas en caso de que no exista
     * \return booleano que indica si la db se abrio con exito
     */
    bool abrir_DB();
    bool cerrar_DB();
    /*!
     * \brief rutina para guardar minimo, maximo y promedio de las mediciones
     * \param Tipo_sensor es un string que indica el tipo de sensor (ej: temperatura, humedad, precipitacion, etc)
     * \param min es un double con el minimo valor tomado durante cada minuto de los sensores
     * \param prom es un double con el promedio tomado durante cada minuto de los sensores
     * \param max es un double con el maximo valor tomado durante cada minuto de los sensores
     * \return booleano que indica si el dato se guardo con exito
     */
    bool guardarmedicion(std::string Tipo_sensor, double min, double prom, double max );
    /*!
     * \brief rutina para recuperar los valores de minimo, maximo y promedio de las mediciones mas recientes
     * \param Tipo_sensor es un string que indica el tipo de sensor(ej: temperatura, humedad, precipitacion, etc)
     * \param min es una variable double por referencia con el minimo valor tomado durante cada minuto de los sensores
     * \param prom es una variable double por referencia con el promedio tomado durante cada minuto de los sensores
     * \param max es una variable double por referencia con el maximo valor tomado durante cada minuto de los sensores
     * \return booleano que indica si el dato se guardo correctamente
     */
    bool recuperarmedicion(std::string Tipo_sensor, double &min, double &prom, double &max );
    /*!
     * \brief rutina para el proceso de registro del usuario
     * \param nombre es un string correspondiente al nombre real del usuario
     * \param apellido es un string correspondiente al apellido real del usuario
     * \param documento es un string correspondiente al documento de identidad del usuario
     * \param fecha es un string correspondiente a la fecha de nacimiento del usuario
     * \param user_name es un string correspondiente al nombre con el cual se quiere registrar el usuario en la aplicación
     * \param psswd es un string necesario para poder tener acceso a la aplicación
     * \return booleano que indica si el dato se guardo correctamente
     */
    bool registro_usuario(std::string nombre,std::string apellido, std::string documento, std::string fecha,std::string user_name, std::string psswd);
    /*!
     * \brief rutina para recuperar los datos que registro el usuario
     * \param nombre es una string con referencia correspondiente al nombre
     * \param apellido es una string con referencia correspondiente al apellido
     * \param documento es una string con referencia correspondiente al documento de identidad
     * \param fecha es una string con referencia correspondiente a la fecha de registro del usuario
     * \param user_name es una string con referencia correspondiente al nombre de usuario
     * \param psswd es una string con referencia correspondiente a la contraseña introducida
     * \return
     */
    bool recuperar_usuario(std::string &nombre,std::string &apellido, std::string &documento, std::string &fecha, std::string &user_name, std::string &psswd);
    /*!
     * \brief rutina para reconocer la fecha y hora exacta de registro del usuario a la aplicación
     * \param nombre es un string correspondiente al nombre guardado del usuario
     * \return booleano que indica si el dato se guardo correctamente
     */
    bool guardar_usuariorg(std::string nombre);
    /*!
     * \brief rutina para guardar una detección de alerta en la papa
     * \param temperatura es un double que indica la temperatura de la papa con el fin de detectar un hongo
     * \param humedad es un double que indica la humedad de la papa con el fin de detectar un hongo
     * \return booleano que indica si el dato se guardo correctamente
     */
    bool alerta_guardar(double temperatura, double humedad);
    /*!
     * \brief rutina para recuperar una alerta de hongo en la papa sea del día de ayer o actual
     * \param fechahoy es un string que indica la fecha actual
     * \param temperaturahoy es un double que indica la temperatura del presente día
     * \param humedadhoy es un double que indica la humedad del presente día
     * \param fechaayer es un string que indica la fecha de ayer
     * \param temperaturaayer es un double que indica la temperatura del dia de ayer
     * \param humedadayer es un double que indica la humedad del dia de ayer
     * \return booleano que indica si el dato se guardo correctamente
     */

    int alerta_recuperar(std::string fechahoy,double &temperaturahoy, double &humedadhoy,std::string fechaayer,double &temperaturaayer, double &humedadayer);

private:
    DB_Local();
    sqlite3         *_db;
    std::string     _url;
    static int rellenar_numeros(void* data, int argc, char* argv[], char* campos[] );
    static int rellenar_string(void* data, int argc, char* argv[], char* campos[] );
};

#endif // DB_LOCAL_H
