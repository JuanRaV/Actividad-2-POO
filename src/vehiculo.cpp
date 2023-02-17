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

void Vehiculo::Mostrar(){

    cout<< "PLACAS: "<<placas<<endl;
    cout<< "COLOR: "<<color<<endl;
    cout<< "MODELO: "<<modelo<<endl;
    cout<< "RODADO: "<<rodado<<endl;
    cout<< "---------------------------------"<<endl<<endl;
}

void Vehiculo::Modificar(string plc)
{
    int opc;
    cout<< "¿Que dato desea modificar?"<<endl;
    cout<< "[1] Color"<<endl<< "[2] Modelo"<<endl<<"[3] Rodado"<<endl;
    cout<< "Seleccione una opcion: "; cin>>opc;

    switch(opc){
        case 1:
            cout<< "Ingrese el color";
            cin>>color;
            break;
        case 2:
            cout<< "Ingrese el modelo: ";
            cin>>modelo;
            break;
        case 3:
            cout<< "Ingrese el rodado";
            cin>>rodado;
            break;
        case 4:
            break;
        default: cout<< "Seleccione una opcion valida"<<endl;

    }
}

bool Vehiculo::isEmpty()
{
    return placas == "" or color == "" or modelo == "" or rodado == "" ? true: false;
}

Vehiculo* Vehiculo::Buscar(string)
{

}
