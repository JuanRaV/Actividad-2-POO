#include <iostream>
#include<Cliente.h>
#include<stdlib.h>
using namespace std;

int main()
{
    Cliente cliente[10];

    int opc,id,cont = 0;
    do{
        system("cls");
        cout << "==Menu==" << endl;
        cout<<"1.-Capturar"<<endl<<"2.-Mostrar"<<endl<<"3.-Modificar"<<endl<<"4.-Eliminar"<<endl<<"5.-Capturar vehiculo"
        <<endl<<"6.-Mostrar vehiculos"<<endl<<"7.-Eliminar vehiculo"<<endl<<"8.-Salir"<<endl<<"Elige una opcion"<<endl;cin>>opc;
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
                                    if(cliente[j].isEmpty()){
                                        break;
                                    }else{
                                    cliente[j] = cliente[j+1];}


                            }
                        }
                }
                break;
            case 5:{
                /*int id;
                cout<<"Escriba el ID del cliente a capturar vehiculo"<<endl;cin>>id;
                cliente[id].capturarVehiculo();
                id--;*/
                break;
            }

            case 6:
                /*{
                    int id;
                    cout<<"Escriba el ID del cliente a mostrar sus vehiculos"<<endl;cin>>id;
                    cliente[id].mostrarVehiculo();
                }*/
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
