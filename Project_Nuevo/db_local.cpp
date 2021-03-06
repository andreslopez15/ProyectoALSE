#include "db_local.h"
#include <sstream>
#include <iostream>


DB_Local::DB_Local(std::string path){
    _url = path;
}

bool DB_Local::abrir_DB(){
    char *zErrMsg = 0;
    int rc;

    rc = sqlite3_open( _url.c_str(), &_db );
    if( rc != 0 ) {
          fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(_db));
          return(1);
       }
    std::string sqlstr="CREATE TABLE IF NOT EXISTS sensores(`id_medida` INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,"\
            "`fecha` TEXT NOT NULL, `hora` TEXT NOT NULL,"\
            "`intensidad_de_luz` REAL NOT NULL, `temperatura` REAL NOT NULL, `humedad` REAL NOT NULL, `velocidad_viento`"\
            " REAL NOT NULL, `direccion_viento` REAL NOT NULL, `precipitacion` REAL NOT NULL ) ";
    CREAR_TABLA(sqlstr);

    /* Create SQL statement */
    sqlstr = "CREATE TABLE IF NOT EXISTS usuario (`id_usuario` INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT, "
             "`Nombre` TEXT NOT NULL, `Apellido` TEXT NOT NULL, `Documento` TEXT NOT NULL,`fecha` TEXT NOT NULL,  `user_name` TEXT NOT NULL, `passwd` TEXT NOT NULL, UNIQUE(user_name, passwd));";
             CREAR_TABLA(sqlstr);

    /* Create SQL statement */
    sqlstr = "CREATE TABLE IF NOT EXISTS mediciones (`id_medicion` INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT, "
             "`Tipo_sensor` TEXT NOT NULL, `maximo` REAL NOT NULL, `minimo` REAL NOT NULL, `promedio` REAL NOT NULL);";
             CREAR_TABLA(sqlstr);

    /* Create SQL statement */
    sqlstr = "CREATE TABLE IF NOT EXISTS alerta_temprana (`id_alerta` INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT, "
              "`fecha` TEXT NOT NULL, `temperatura` REAL NOT NULL, `humedad` REAL NOT NULL);";
              CREAR_TABLA(sqlstr);

    /* Create SQL statement */
    sqlstr = "CREATE TABLE IF NOT EXISTS registro_usuario (`id_usuariorg` INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT, "
             " `user_name` TEXT NOT NULL,`fecha` TEXT NOT NULL, `hora` TEXT NOT NULL);";
              CREAR_TABLA(sqlstr);

    if( rc != SQLITE_OK)
       return(false);

    return true;
}

bool DB_Local::cerrar_DB(){

    int rc = sqlite3_close( _db );

    if( rc != SQLITE_OK )
        return false;

    return true;
}
bool DB_Local::Guardar_datos_sensores( double temperatura, double humedad, double direccion_del_viento,
                                       double precipitacion, double velocidad_del_viento,
                                       double intensidad_de_la_luz){
    char *mesg = 0;
    int rc = 0;
    std::stringstream sqlsentence;

    sqlsentence << "INSERT INTO sensores ('fecha', 'hora', 'intensidad_de_luz', 'temperatura', "
                   "'humedad', 'velocidad_viento', 'direccion_viento', 'precipitacion') VALUES (";
    sqlsentence << "date('now')" << " , " << "time('now')" << " , " << intensidad_de_la_luz << " , "
                << temperatura<< " , " << humedad << " , " << velocidad_del_viento<<" , "
                << direccion_del_viento<< " , " << precipitacion<< ");";

    rc = sqlite3_exec( _db, sqlsentence.str().c_str(), 0, 0, &mesg );

    
    if (rc != SQLITE_OK ){
        fprintf(stderr, "SQL error: %s\n", mesg);
        return false;
    }
    return true;

}
int DB_Local::CREAR_TABLA(std::string sqlstr)
{
    int rc;
    char *zErrMsg;
    /* Execute SQL statement */
    rc = sqlite3_exec(_db, sqlstr.c_str(), 0, 0, &zErrMsg);


    if( rc != SQLITE_OK ){
       fprintf(stderr, "SQL error: %s\n", zErrMsg);
       sqlite3_free(zErrMsg);
       return (2);
    } else {
       //fprintf(stdout, "Table created successfully\n");
       return (0);
    }
}

bool DB_Local::guardarmedicion(std::string Tipo_sensor, double min, double prom, double max){
    char *mesg = 0;
    int rc = 0;
    std::stringstream sqlsentence;

    sqlsentence << "INSERT INTO mediciones ('Tipo_sensor', 'maximo', 'minimo', 'promedio') VALUES (";
    sqlsentence << "'" << Tipo_sensor << "', " << max << " , " << min << ", " << prom<<");" ;

    rc = sqlite3_exec( _db, sqlsentence.str().c_str(), 0, 0, &mesg );

    if (rc != SQLITE_OK ){
        fprintf(stderr, "SQL error: %s\n", mesg);
        return false;
    }
    return true;
}

bool DB_Local::recuperarmedicion( std::string Tipo_sensor, double &min, double &prom, double &max){
    char *mesg = 0;
    int rc = 0;

    double tmp[3] = {0., 0., 0.}; // En este vector se traen los datos de la callback function.

    std::stringstream sql;
    sql << "SELECT  maximo, minimo, promedio FROM mediciones WHERE id_medicion = (SELECT MAX(id_medicion) FROM mediciones WHERE Tipo_sensor = '" << Tipo_sensor << "')";
    rc = sqlite3_exec( _db, sql.str().c_str(), rellenar_numeros, (void*)&tmp, &mesg );

    if (rc != SQLITE_OK )
        return false;


    max = tmp[0];
    min = tmp[1];
    prom = tmp[2];

    return true;

}

bool DB_Local::registro_usuario(std::string nombre, std::string apellido, std::string documento, std::string fecha, std::string user_name, std::string psswd){
    char *mesg = 0;
    int rc = 0;
    std::stringstream sqlsentence;

    sqlsentence << "INSERT INTO usuario ('Nombre', 'Apellido','Documento', 'fecha', 'user_name', 'passwd') VALUES (";
    sqlsentence << "'" << nombre << "','" << apellido << "' , '" << documento << "', '" << fecha <<"', '" << user_name <<"', '" << psswd <<"');" ;

    rc = sqlite3_exec( _db, sqlsentence.str().c_str(), 0, 0, &mesg );

    if (rc != SQLITE_OK ){
        fprintf(stderr, "SQL error: %s\n", mesg);
        return false;
    }
    return true;

}

bool DB_Local::recuperar_usuario(std::string &nombre, std::string &apellido, std::string &documento, std::string &fecha, std::string &user_name, std::string &psswd){
    char *mesg = 0;
    int rc = 0;

    std::string tmp[6]; // En este vector se traen los datos de la callback function.

    std::stringstream sql;
    sql << "SELECT  Nombre, Apellido, Documento, fecha, user_name, passwd FROM usuario WHERE  user_name = '" << user_name << "';";
    rc = sqlite3_exec( _db, sql.str().c_str(), rellenar_string, (void*)&tmp, &mesg );

    if (rc != SQLITE_OK ){
        fprintf(stderr, "SQL error: %s\n", mesg);
        return false;
    }

    nombre = tmp[0];
    apellido = tmp[1];
    documento = tmp[2];
    fecha = tmp[3];
    user_name = tmp[4];
    psswd = tmp[5];


    return true;
}

bool DB_Local::guardar_usuariorg(std::string nombre)
{
    char *mesg = 0;
    int rc = 0;
    std::stringstream sqlsentence;


    sqlsentence << "INSERT INTO registro_usuario ('user_name', 'fecha', 'hora') VALUES (";
    sqlsentence << "'" << nombre << "'" <<  " ,DATE('now') " << " , " << " TIME('now') " << ");" ;

    rc = sqlite3_exec( _db, sqlsentence.str().c_str(), 0, 0, &mesg );

    if (rc != SQLITE_OK ){
        fprintf(stderr, "SQL error: %s\n", mesg);
        return false;
    }
    return true;
}

DB_Local::DB_Local(){

}

int DB_Local::rellenar_numeros(void *data, int argc, char *argv[], char *campos[]){
    double *ttemp = (double*) data;

    for(int i = 0; i < argc; i++){
        ttemp[i] = atof(argv[i]);
    }

    return 0;
}

int DB_Local::rellenar_string(void *data, int argc, char *argv[], char *campos[]){
    std::string *ttemp = (std::string*) data;

    for(int i = 0; i < argc; i++){
        ttemp[i] = argv[i];
    }

    return 0;
}

bool  DB_Local::alerta_guardar( double temperatura, double humedad){
    char *mesg = 0;
    int rc = 0;
    std::stringstream sqlsentence;

    sqlsentence << "INSERT INTO alerta_temprana ('fecha', 'temperatura', 'humedad') VALUES (";
    sqlsentence << " DATE('now'), " << temperatura << " , " << humedad << ");" ;

    rc = sqlite3_exec( _db, sqlsentence.str().c_str(), 0, 0, &mesg );

    if (rc != SQLITE_OK ){
        fprintf(stderr, "SQL error: %s\n", mesg);
        return false;
    }
    return true;
}

int DB_Local::alerta_recuperar(std::string fechahoy,double &temperaturahoy, double &humedadhoy,std::string fechaayer,double &temperaturaayer, double &humedadayer){
    char *mesg = 0;
    int rc = 0;

    std::string tmp[3]; // En este vector se traen los datos de la callback function.

    std::stringstream sql;
    sql << "SELECT * FROM alerta_temprana WHERE fecha = date('now','-1 day');";
    rc = sqlite3_exec( _db, sql.str().c_str(), rellenar_string, (void*)&tmp, &mesg );

    if (rc != SQLITE_OK ){
        fprintf(stderr, "SQL error: %s\n", mesg);
        return -1;
    }

    fechaayer = tmp[0];
    temperaturaayer = atof(tmp[1].c_str());
    humedadayer = atof(tmp[2].c_str());

    sql << "SELECT * FROM alerta_temprana WHERE fecha = date('now');";
    rc = sqlite3_exec( _db, sql.str().c_str(), rellenar_string, (void*)&tmp, &mesg );

    if (rc != SQLITE_OK ){
        fprintf(stderr, "SQL error: %s\n", mesg);
        return -1;
    }


    fechahoy = tmp[0];
    temperaturahoy = atof(tmp[1].c_str());
    humedadhoy = atof(tmp[2].c_str());


    if(fechaayer != "" && fechahoy != ""){
            return 2; //Alerta roja
    }

    if(fechaayer != "" || fechahoy != ""){
        return 1; //Alerta amarilla
    }

    return 0; //Alerta verde
}






