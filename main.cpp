#include <iostream>
//#include ".\cConn.h"
#include "C:\Program Files\MySQL\MySQL Server 8.0\include\mysql.h"
#include "C:\Program Files\MySQL\MySQL Server 8.0\include\mysqld_error.h"

using namespace std;
//int main(){
   //cConn connDB;
   //MYSQL *objDatos;
    //if(!(objDatos = mysql_init(0)))    {
      //  cout<<"Error al cargar driver de la base de datos";
        //return 0;
   // }
//}
int main(){
   MYSQL *objDatos;
   objDatos = mysql_init(0);
   objDatos = mysql_real_connect(objDatos,"localhost","root","root","ferreteria",3306,NULL,0);
    if(objDatos)    {
        cout<<"Base de datos conectada";
        return 0;
    }
    else{
        cout<<"Error..";
    }
    system("pause");
    return 0;
}