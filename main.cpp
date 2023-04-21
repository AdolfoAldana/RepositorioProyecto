#include <iostream>
#include "C:/Program Files/MySQL/MySQL Server 8.0/include/mysql.h"
#include "C:/Program Files/MySQL/MySQL Server 8.0/include/mysqld_error.h"


using namespace std;

int main()
{
    try
    {
    MYSQL* conectar;
    conectar= mysql_init(0);
    conectar= mysql_real_connect(conectar,"localhost", "root" , "root" , "ferreteria",3306,NULL, 0);
    if(conectar){
        cout<< "Conexion Exitosa.." <<endl;
    }
    else{
        cout<< "Error en la conexion.."<<endl;
    }
    }  
    catch (int x ) {
      cout << "Exception Caught \n";
   }
    system("pause");
    return 0;
}
