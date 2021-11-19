#include <stdio.h>
#include <stdlib.h>
#include <sqlite3.h>
#include <string>

using namespace std;
int Insertar_Datos(string sql, sqlite3 *db);

int main(int argc, char* argv[]) {
   sqlite3 *db;
   char *zErrMsg = 0;
   int rc;
   string sql;

   /* Open database */
   rc = sqlite3_open("test.db", &db);
   
   if( rc ) {
      fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
      return(0);
   } else {
      fprintf(stderr, "Opened database successfully\n");
   }

   /* Create SQL statement */
   sql = "INSERT INTO usuario (Nombre, Apellido, user_name, passwd) "  \
         "VALUES ('Juan','Ovalle','jovalle','jov54'); " \
         "INSERT INTO usuario (Nombre, Apellido, user_name, passwd) "  \
         "VALUES ('Andres','Pardo','apardo','apdo87'); " \
         "INSERT INTO usuario (Nombre, Apellido, user_name, passwd) "  \
         "VALUES ('Wilfredo','Pérez','wperez','wp43'); " \
         "INSERT INTO usuario (Nombre, Apellido, user_name, passwd) "  \
         "VALUES ('Omar','Paez','opaez','opaw34'); " ;

   Insertar_Datos(sql, db);


   /*Sensor de tempertura y humedad*/
   /* Create SQL statement */
   sql = "INSERT INTO sensor_temperatura (Temperatura, Humedad, Fecha) "  \
         "VALUES ('-10','0.10',datetime('now')); " \
         "INSERT INTO sensor_temperatura (Temperatura, Humedad, Fecha) "  \
         "VALUES ('15','0.45',datetime('now')); " \
         "INSERT INTO sensor_temperatura (Temperatura, Humedad, Fecha) "  \
         "VALUES ('26','0.869',datetime('now')); " \
         "INSERT INTO sensor_temperatura (Temperatura, Humedad, Fecha) "  \
         "VALUES ('45','1',datetime('now')); " ;

   Insertar_Datos(sql,db);

   /*Sensor viento*/
   /* Create SQL statement */
   sql = "INSERT INTO sensor_viento(Direccion_del_viento, Velocidad, Fecha) "  \
         "VALUES ('-180','12.30',datetime('now')); " \
         "INSERT INTO sensor_viento(Direccion_del_viento, Velocidad, Fecha) "  \
         "VALUES ('127','20',datetime('now')); " \
         "INSERT INTO sensor_viento(Direccion_del_viento, Velocidad, Fecha) "  \
         "VALUES ('175','30',datetime('now')); " \
         "INSERT INTO sensor_viento(Direccion_del_viento, Velocidad, Fecha) "  \
         "VALUES ('40','45.89',datetime('now')); "  ;

   Insertar_Datos(sql,db);

   /*Sensor intensidad de luz*/
   /* Create SQL statement */
   sql = "INSERT INTO sensor_intensidad_de_luz (Intensidad_de_luz , Fecha) "  \
         "VALUES ('850',datetime('now')); " \
         "INSERT INTO sensor_intensidad_de_luz (Intensidad_de_luz , Fecha) "  \
         "VALUES ('0',datetime('now')); " \
         "INSERT INTO sensor_intensidad_de_luz (Intensidad_de_luz , Fecha) "  \
         "VALUES ('2000',datetime('now')); " \
         "INSERT INTO sensor_intensidad_de_luz (Intensidad_de_luz , Fecha) "  \
         "VALUES ('1568',datetime('now')); "  ;

   Insertar_Datos(sql,db);


   /*Sensor precipitacion*/
   /* Create SQL statement */
   sql = "INSERT INTO sensor_precipitacion (Precipitacion, Fecha) "  \
         "VALUES ('27',datetime('now')); " \
         "INSERT INTO sensor_precipitacion (Precipitacion, Fecha) "  \
         "VALUES ('13',datetime('now')); " \
         "INSERT INTO sensor_precipitacion (Precipitacion, Fecha) "  \
         "VALUES ('48',datetime('now')); " \
         "INSERT INTO sensor_precipitacion (Precipitacion, Fecha) "  \
         "VALUES ('36',datetime('now')); " ;

   Insertar_Datos(sql,db);

   sqlite3_close(db);
   return 0;
}

int Insertar_Datos(string sql, sqlite3 *db)
{
    int rc;
    char *zErrMsg;

    /* Execute SQL statement */
    rc = sqlite3_exec(db, sql.c_str(), 0, 0, &zErrMsg);

    if( rc != SQLITE_OK ){
       fprintf(stderr, "SQL error: %s\n", zErrMsg);
       sqlite3_free(zErrMsg);
       return (2);
    } else {
       fprintf(stdout, "Records created successfully\n");
       return (0);
    }

}
