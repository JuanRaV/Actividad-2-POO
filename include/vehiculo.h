#ifndef VEHICULO_H
#define VEHICULO_H
#include<string>
#include<stdlib.h>

using namespace std;

class Vehiculo
{
    public:
        Vehiculo();
        ~Vehiculo();
        string placas;
        string color;
        string modelo;
        string rodado;

        void Capturar();
        void Mostrar();
        void Eliminar(string);
        void Modificar(string);
        Vehiculo* Buscar(string);

};

#endif // VEHICULO_H
