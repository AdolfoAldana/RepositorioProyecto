#ifndef CCONN_H
#define CCONN_H
//Bibliiotecas para la conexión a la base de datos
#include <iostream>
#include "C:\Program Files\MySQL\MySQL Server 8.0\include\mysql.h"
#include "C:\Program Files\MySQL\MySQL Server 8.0\include\mysqld_error.h"
using namespace std;
class cConn
{
    public:
        void m_conectar_BaseDeDatos(MYSQL *objDatos, char *cConsulta){
            if(mysql_real_connect(objDatos,"localhost","root","root","ferreteria",3306,NULL,0)){
            cout<<"\nConectando a la base de datos";

            mysql_query(objDatos,cConsulta);

            if (mysql_error(objDatos) != NULL){
                    cout<<"\nDatos grabados con exito";}
            else{
            cout<<"\nError al grabar en la base de datos-->"<<mysql_error(objDatos);}
        }
        else{
            cout<<"Error al conectarse a la base de datos-->"<<mysql_error(objDatos);
        }
        }
        

    protected:

    private:
};

#endif // CCONN_H