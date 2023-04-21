create database Ferreteria;
drop database ferreteria;
use Ferreteria;
show tables;
drop table Articulos;
create table Articulos(
ID_Articulos int PRIMARY KEY auto_increment,
Nombre_Articulo varchar(50) not null,
Cantidad_Articulo int not null,
Precio_Articulo float not null
);
create table Usuarios(
ID_Usuario int Primary key auto_increment,
Perfil_Usuario varchar(50) not null,
Nombre_Usuario varchar(50) not null,
Apellido_Usuario varchar(50) not null,
Correoelectronico_Usuario varchar(50) not null,
Pass_Usuario int not null
);
create table Clientes(
ID_Cliente int Primary key auto_increment,
Nombre_Clientes varchar(50) not null,
Apellido_Clientes varchar(50) not null,
Telefono_Cliente int not null,
ID_Usuario_Cliente int,
FOREIGN KEY (ID_Usuario_Cliente) REFERENCES Usuarios(ID_Usuario)
);
create table Personal(
ID_Personal int Primary key auto_increment,
Nombre_Personal varchar(50) not null,
Apellido_Personal varchar(50) not null,
Puesto_Personal varchar(50) not null,
Telefono_Personal int not null,
Fecha_Incorporacion_year int not null,
Fecha_Incorporacion_mes varchar(50) not null,
ID_Usuario_Personal int not null,
FOREIGN KEY (ID_Usuario_Personal) REFERENCES Usuarios(ID_Usuario)
);
create table Proveedores(
ID_Proveedores int primary key auto_increment,
Nombre_Proveedores varchar(50) not null,
CorreoElectronico_Proveedores varchar(50) not null,
Telefono_Proveedores int,
ID_articulo_proveedores int,
FOREIGN KEY (ID_articulo_proveedores) REFERENCES Articulos(ID_Articulos)
);
create table Compras(
ID_Compra int primary key auto_increment,
ID_Cliente_Compra int,
ID_Articulo_Compra int,
Fecha_Transaccion int,
FOREIGN KEY (ID_Cliente_Compra) REFERENCES Clientes(ID_Cliente),
FOREIGN KEY (ID_Articulo_Compra) REFERENCES Articulos(ID_Articulos)
);
create table Ventas(
ID_Venta int primary key auto_increment,
ID_Personal_Venta int,
ID_Compra_Venta int,
ID_Articulo_Venta int,
FOREIGN KEY (ID_Personal_Venta) REFERENCES Personal(ID_Personal),
FOREIGN KEY (ID_Compra_Venta) REFERENCES Compras(ID_Compra),
FOREIGN KEY (ID_Articulo_Venta) REFERENCES Articulos(ID_Articulos)
);

