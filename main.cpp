#include <iostream>
#include<Cliente.h>
#include<stdlib.h>
using namespace std;

int main()
{
    Cliente cliente[10];

    int opc,id=1;
    do{
        system("cls");
        cout << "==Menu==" << endl;
        cout<<"1.-Capturar"<<endl<<"2.-Mostrar"<<endl<<"3.-Modificar"<<endl<<"4.-Eliminar"<<endl<<"5.-Capturar vehiculo"
        <<endl<<"6.-Mostrar vehiculos"<<endl<<"7.-Eliminar vehiculo"<<endl<<"8.-Salir"<<endl<<"Elige una opcion"<<endl;cin>>opc;
        switch(opc){
            case 1:

                //Cliente cliente_nuevo;
                //cliente_nuevo.Capturar();
                //cliente[id] = cliente_nuevo;
                cliente[id].Capturar(id);
                id++;
                break;


            case 2:
                for(int i = 1;i<id;i++)
                    cliente[i].Mostrar();
                system("pause");
                break;
            case 3:
                int id;
                cout<<"Escriba el id a modificar"<<endl;cin>>id;
                cliente[id].Modificar(id);
                system("pause");
                break;
            case 4:
                cliente->Eliminar();
                break;
            case 5:{
                int id;
                cout<<"Escriba el ID del cliente a capturar vehiculo"<<endl;cin>>id;
                cliente[id].capturarVehiculo();
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
            }

            default:
                cout<<"Elija una opcion valida"<<endl;

        }
    }while(opc!=8);


    return 0;
}