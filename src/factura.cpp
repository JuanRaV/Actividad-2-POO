#include "factura.h"
#include <iostream>
using namespace std;
Factura::Factura()
{
    //ctor
}

Factura::~Factura()
{
    //dtor
}
void Factura::Capturar()
{

    cout<<"Introduce el rfc: ";
    cin>>rfc;
    cout<<"Introduce el monto: ";
    cin>>monto;
    cout<<"Introduce el domicilio: ";
    cin>>domicilio;
    cout<<"Introduce el constancia fiscal: ";
    cin>>con_fiscal;
    cout<<"Introduce el id de venta: ";
    cin>>id_venta;

}
