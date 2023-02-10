#include <iostream>
#include<Cliente.h>
#include<stdlib.h>
using namespace std;

int main()
{
    Cliente cliente[10];

    int opc,cont=1;
    do{
        system("cls");
        cout << "==Menu==" << endl;
        cout<<"1.-Capturar"<<endl<<"2.-Mostrar"<<endl<<"3.-Modificar"<<endl<<"4.-Eliminar"<<endl<<"5.-Salir"<<endl<<"Elige una opcion"<<endl;cin>>opc;
        switch(opc){
            case 1:{
                //id++;
                //Cliente cliente_nuevo;
                //cliente_nuevo.Capturar();
                //cliente[id] = cliente_nuevo;
                cliente[cont].Capturar();cont++;
                break;
            }

            case 2:
                for(int i = 1;i<cont;i++)
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
            case 5:
                break;
            default:
                cout<<"Elija una opcion valida"<<endl;

        }
    }while(opc!=5);


    return 0;
}
