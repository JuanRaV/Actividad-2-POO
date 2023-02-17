#include "Cliente.h"
#include<iostream>
#include<string>
using namespace std;
Cliente::Cliente()
{
    nombre = "";
    rfc = "";
    telefono = "";
    id_cliente = 0;
}

Cliente::~Cliente()
{
    //dtor
}
void Cliente::Capturar()
{
    cout<<"Escribe el nombre: "<<endl;
    cin>>nombre;

    cout<<"Escribe el RFC: "<<endl;
    cin>>rfc;

    cout<<"Escribe el correo electronico: "<<endl;
    cin>>email;

    cout<<"Escribe el numero de telefono: "<<endl;
    cin>>telefono;

    cout<<"Escribe el id de cliente: "<<endl;
    cin>>id_cliente;



}

void Cliente::Mostrar()
{
    cout<<"==DATOS DE: "<<nombre<<"=="<<endl;
    cout<<"ID: "<<id_cliente<<endl;
    cout<<"RFC: "<<rfc<<endl;
    cout<<"EMAIL: "<<email<<endl;
    cout<<"TELEFONO: "<<telefono<<endl;
    cout<<"-----------------------"<<endl<<endl;


}

Cliente* Cliente::Buscar(long)
{

}

void Cliente::Eliminar()
{

}

void Cliente::Modificar()
{

        int opcion;
        cout<<"Que dato desea modificar"<<endl;
        cout<<"1.-Nombre"<<endl<<"2.-RFC"<<endl<<"3.-Email"<<endl<<"4.-Telefono"<<endl<<"5.-No quiero editar"<<endl;cin>>opcion;

        switch(opcion){
        case 1:
            cout<<"Escribe el nombre: "<<endl;
            cin>>nombre;
            break;
        case 2:
            cout<<"Escribe el RFC: "<<endl;
            cin>>rfc;
            break;
        case 3:
            cout<<"Escribe el correo electronico: "<<endl;
            cin>>email;
            break;
        case 4:
            cout<<"Escribe el numero de telefono: "<<endl;
            cin>>telefono;
            break;
        case 5:
        break;
        default: cout<<"Elija una opcion correcta"<<endl;

        };

}
void Cliente::capturarVehiculo()
{
    Vehiculo* V = new Vehiculo();
    V->Capturar();
    vehiculos.push_back(V);
    cout<<"Vehiculo "<< V->placas<<"agregado correctamente"<<endl;
}

void Cliente::mostrarVehiculo(){
    for(int i= 0; i < vehiculos.size();i++){
        cout<<"Placas: "<<vehiculos[i]->placas <<endl;
        cout<<"Color: "<<vehiculos[i]->color <<endl;
        cout<<"Modelo: "<<vehiculos[i]->modelo <<endl;
        cout<<"Rodado: "<<vehiculos[i]->rodado <<endl;
        cout<<"----------------------------"<<endl;
    }
    system("pause");
}
bool Cliente::isEmpty()
{
    return nombre == "" or rfc == "" or email == "" or telefono == "" or id_cliente == -1 ? true : false;
}

