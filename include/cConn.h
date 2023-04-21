#ifndef CCONN_H
#define CCONN_H
//Bibliiotecas para la conexión a la base de datos
#include "C:/Program Files/MySQL/MySQL Server 8.0/include/mysql.h"
#include "C:/Program Files/MySQL/MySQL Server 8.0/include/mysqld_error.h"

class cConn
{
    public:
        cConn();
        void m_conectar_BaseDeDatos(MYSQL *objDatos, char *cConsulta);
        virtual ~cConn();

    protected:

    private:
};

#endif // CCONN_H
