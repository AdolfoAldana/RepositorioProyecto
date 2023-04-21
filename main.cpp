#include <iostream>
#include ".\cConn.h"
#include "C:\Program Files\MySQL\MySQL Server 8.0\include\mysql.h"
#include "C:\Program Files\MySQL\MySQL Server 8.0\include\mysqld_error.h"


using namespace std;
int main(){
   cConn connDB;
   MYSQL *objDatos;
    if(!(objDatos = mysql_init(0)))    {
        cout<<"Error al cargar driver de la base de datos";
        return 0;
    }
}