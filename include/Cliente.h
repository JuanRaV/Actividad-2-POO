#ifndef CLIENTE_H
#define CLIENTE_H
#include<iostream>
#include<vector>
#include<vehiculo.h>
#include<string>
using namespace std;
class Cliente
{
    public:
        string nombre;
        string rfc;
        string email,telefono;
        long id_cliente;
        vector<Vehiculo*>vehiculos;

        Cliente();
        ~Cliente();

        void Capturar( );
        void Mostrar();
        Cliente *Buscar(long);
        bool isEmpty();
        void Eliminar();
        void Modificar(long);
        void capturarVehiculo();
        void mostrarVehiculo();

};


#endif // CLIENTE_H
