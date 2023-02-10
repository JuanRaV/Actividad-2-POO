#ifndef CLIENTE_H
#define CLIENTE_H
#include<iostream>
using namespace std;
class Cliente
{
    public:
        string nombre;
        string rfc;
        string email,telefono;
        long id_cliente;

        Cliente();
        ~Cliente();

        void Capturar();
        void Mostrar();
        Cliente *Buscar(long);
        void Eliminar();
        void Modificar(long);
};


#endif // CLIENTE_H
