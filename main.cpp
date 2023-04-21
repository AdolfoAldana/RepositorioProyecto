#include <iostream>
#include "C:/Users/Adolfo/Documents/Proyecto/RepositorioProyecto/files/cConn.h"
#include "C:/Program Files/MySQL/MySQL Server 8.0/include/mysql.h"
#include "C:/Program Files/MySQL/MySQL Server 8.0/include/mysqld_error.h"
using namespace std;

int main()
{
    struct Articulos{
        int ID_Articulos;
        char Nombre_Articulo[50];
        int Cantidad_Articulo;
        float Precio_Articulo[50];
    }sArticulos;

    cConn connDB;
    MYSQL *objDatos;
    char *cConsulta;
    char cSentencia[]="INSERT INTO db_pruebas.tbl_alumnos VALUES(\%d\, \'%s\', \'%s\',\'%s\',\'%s\')";

    printf("Ingrese ID del alumno: ");
    scanf("%d",&sArticulos.ID_Articulos);

    printf("Ingrese Carnet del alumno: ");
    scanf("%s",&sArticulos.Nombre_Articulo);

    printf("Ingrese Nombre del alumno: ");
    scanf("%s",&sArticulos.Cantidad_Articulo);

    printf("Ingrese Apelliod del alumno: ");
    scanf("%s",&sArticulos.Precio_Articulo);



    cConsulta = new char[strlen(cSentencia)+sizeof(Articulos)-sizeof(int)];
    sprintf(cConsulta,cSentencia, sArticulos.ID_Articulos, sArticulos.Nombre_Articulo, sArticulos.Cantidad_Articulo, sArticulos.Precio_Articulo);


    if(!(objDatos = mysql_init(0)))    {
        cout<<"Error al cargar driver de la base de datos";
        return 1;
    }
    //Me conecto a la base de datos
    connDB.m_conectar_BaseDeDatos(objDatos, cConsulta);
    return 0;
}
