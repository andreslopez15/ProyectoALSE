#include <stdio.h>
#include <stdlib.h>
#include <sqlite3.h> 
#include <string>
#include <iostream>

using namespace std;

int SELECT(string sql, void *data, sqlite3 *db);

static int callback(void *data, int argc, char **argv, char **azColName){
   int i;
   std::cout << (const char*)data << std::endl;
   
   for(i = 0; i<argc; i++){
      std::cout << azColName[i] << " = " << (argv[i] ? argv[i] : "NULL")  << std::endl;
   }
   
   std::cout << std::endl;
   return 0;
}


int main(int argc, char* argv[]) {
   sqlite3 *db;
   char *zErrMsg = 0;
   int rc;
   string sql;
   const char* data = "He llamado la función Callback";

   /* Open database */
   rc = sqlite3_open("test.db", &db);
   
   if( rc ) {
      fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
      return(0);
   } else {
      fprintf(stderr, "Opened database successfully\n");
   }

   /* Create SQL statement */
   sql = "SELECT * FROM usuario;";
   SELECT(sql, &data, db);

   sql = "SELECT * FROM sensor_viento;";
   SELECT(sql, &data, db);

   sql = "SELECT * FROM sensor_temperatura;";
   SELECT(sql, &data, db);

   sql = "SELECT * FROM sensor_precipitacion;";
   SELECT(sql, &data, db);

   sql = "SELECT * FROM sensor_intensidad_de_luz;";
   SELECT(sql, &data, db);


   sqlite3_close(db);
   return 0;
}

int SELECT(string sql, void *data, sqlite3 *db)
{
    int rc;
    char *zErrMsg;

    /* Execute SQL statement */
    rc = sqlite3_exec(db, sql.c_str(), callback, (void*)data, &zErrMsg);

    if( rc != SQLITE_OK ) {
       fprintf(stderr, "SQL error: %s\n", zErrMsg);
       sqlite3_free(zErrMsg);
       return(2);
    } else {
       fprintf(stdout, "Operation done successfully\n");
       return(0);
    }
}
