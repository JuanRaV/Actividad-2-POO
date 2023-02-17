#include <iostream>
#include<Cliente.h>
#include<stdlib.h>
#include "factura.h"
#include "vehiculo.h"
using namespace std;

int main()
{
    Cliente cliente[10];
    Vehiculo vehiculos[10];

    int opc,id,cont = 0;
    int contV=0;
    string plc;
    do{
        system("cls");
        cout << "==Menu==" << endl;

        cout<<"Escribe"<<endl;
        cout<<"1.-Capturar cliente"<<endl<<"2.-Mostrar cliente"<<endl<<"3.-Modificar cliente"<<endl<<"4.-Eliminar cliente"<<endl<< "5.-Buscar Cliente"<<endl<<"6.- Capturar vehiculo"<<endl;
        cout<< "7.- Mostrar vehiculos"<<endl<< "8.-Modificar vehiculo"<<endl<< "9.-Eliminar vehiculo"<<endl<< "10.-Buscar Vehiculo"<<endl<< "11.-Salir"<<endl;
        cin>>opc;

        switch(opc){
            case 1:

                for(int i = 0; i < 10;i++){
                    if(cliente[i].isEmpty()){
                        Cliente c = Cliente();
                        c.Capturar();
                        cliente[i] = c;
                        cont++;
                        break;
                    }
                }

                break;


            case 2:

                for(int i = 0;i<cont;i++)
                    cliente[i].Mostrar();
                system("pause");
                break;
            case 3:

                cout<<"Escriba el id a modificar"<<endl;cin>>id;
                for(int i = 0; i < 10; i++){
                        if(id == cliente[i].id_cliente){
                            cliente[i].Modificar();
                        }
                }

                system("pause");
                break;
            case 4:
                cout<<"Escriba el id de cliente a eliminar"<<endl;cin>>id;
                for(int i = 0; i < 10; i++){
                        if(id == cliente[i].id_cliente){
                            for(int j = i; j<9; j++){

                                    if(cliente[j].isEmpty())
                                        break;
                                    else{
                                        cliente[j] = cliente[j+1];
                                        cont--;
                                    }


                            }
                            for(int i = 0;i<=cont;i++)
                                cliente[i].Mostrar();
                        }
                }
                cout<<"Cliente eliminado correctamente"<<endl;
                system("pause");
                break;
            case 5:
                cout<< "Ingrese el Id del cliente que desea buscar: "; cin>>id;
                for(int i=0; i<10; i++){
                    if(id == cliente[i].id_cliente){
                        cliente[i].Mostrar();
                    }
                }
                system("pause");
                break;
            case 6:

                for(int i=0; i<10; i++){
                    if(vehiculos[i].isEmpty()){
                        Vehiculo v = Vehiculo();
                        v.Capturar();
                        vehiculos[i] = v;
                        contV++;
                        break;
                    }
                }
                system("pause");
                break;
            case 7:
                for(int i=0; i<=contV; i++){
                    vehiculos[i].Mostrar();

                }
                system("pause");
                break;
            case 8:
                cout<< "Ingrese las placas del vehiculo que desea modificar: "; cin>>plc;
                for(int i=0; i<10; i++){
                    if(plc == vehiculos[i].placas){
                        vehiculos[i].Modificar(plc);
                    }
                }
                system("pause");
                break;
            case 9:
                 cout<<"Ingrese las placas del vehiculo que desea eliminar: "<<endl;cin>>plc;
                for(int i = 0; i < 10; i++){
                        if(plc == vehiculos[i].placas){
                            for(int j = i; j<9; j++){

                                    if(vehiculos[j].isEmpty())
                                        break;
                                    else{
                                        vehiculos[j] = vehiculos[j+1];
                                        contV--;
                                    }


                            }
                            for(int i = 0;i<=contV;i++)
                                vehiculos[i].Mostrar();
                        }
                }
                cout<<"Cliente eliminado correctamente"<<endl;
                system("pause");
                break;
            case 10:
                cout<< "Ingrese las placas del vehiculo que desea buscar: "; cin>>plc;

                for(int i=0; i<10; i++){
                    if(plc == vehiculos[i].placas){
                        vehiculos[i].Mostrar();
                    }
                }
                system("pause");

                break;
            case 11:
                break;
            default: cout<< "Seleccione una opcion valida"<<endl;
            /*case 5:{
                int id;
                cout<<"Escriba el ID del cliente a capturar vehiculo"<<endl;cin>>id;
                cliente[id].capturarVehiculo();
                id--;
                break;
            }

            case 6:
                {
                    int id;
                    cout<<"Escriba el ID del cliente a mostrar sus vehiculos"<<endl;cin>>id;
                    cliente[id].mostrarVehiculo();
                }
                break;
            case 7:{
                string placas;
                cout<<"Escribe las placas a eliminar";cin>>placas;

                break;

            }*/



        }

    }while(opc!=9);



    return 0;
}
