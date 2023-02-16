#include "vehiculo.h"
#include<iostream>

using namespace std;
Vehiculo::Vehiculo()
{
    placas = "";
    color = "";
    modelo = "";
    rodado = "";
}

Vehiculo::~Vehiculo()
{
    //dtor
}
void Vehiculo::Capturar()
{

    cout<<"Escribe las placas: "<<endl;
    cin>>placas;

    cout<<"Escribe el color: "<<endl;
    cin>>color;

    cout<<"Escribe el modelo: "<<endl;
    cin>>modelo;

    cout<<"Escribe el rodado: "<<endl;
    cin>>rodado;

}




void Vehiculo::Modificar(string)
{

}

Vehiculo* Vehiculo::Buscar(string)
{

}
