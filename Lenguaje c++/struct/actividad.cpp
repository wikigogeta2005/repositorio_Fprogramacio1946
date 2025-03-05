#include <iostream>
#include <string.h> 
using namespace std;

struct automoviles{
    int codigo;
    int periodo;
    string marca;
    string modelo;
    char placa[50];
}p1,p2;

main(){

    automoviles p1,p2,p3;

    p3.codigo=3456;
    p3.marca="Toyota";
    p3.modelo="Forester";
    p3.periodo=2020;
   strcpy(p3.placa,"PXY-3456");



    

    cout<<"Registro de automoviles"<<endl;
    cout<<"----------------------------\n";

    cout<<"Ingrese el codigo del automovil 1:";
    cin>>p1.codigo;
    cin.ignore();
    cout<<"Ingrese la marca  del automovil 1: \n";
    getline(cin,p1.marca);
    cout<<"Ingrese el periodo del automovil 1: \n";
    cin>>p1.periodo;
    cin.ignore();
    cout<<"Ingrese el  modelo del automovil 1: \n";
    getline(cin,p1.modelo);
    cout<<"Ingrese la placa del automovil 1: ";
    cin>>p1.placa;

    cout<<"----------------------------------\n";

    cout<<"Ingrese el codigo del automovil 2: ";
    cin>>p2.codigo;
    cin.ignore();
    cout<<"Ingrese la marca del automovil 2: \n";
    getline(cin,p2.marca);
    cout<<"Ingrese el periodo del automovil 2: \n";
    cin>>p2.periodo;
    cin.ignore();
    cout<<"Ingrese el modelo del automovil 2: \n";
    getline(cin,p2.modelo);
    cout<<"Ingrese la placa del automovil 2: \n";
    cin>>p2.placa;

    cin.ignore();
    cout << "\nRegistro completado:\n";
    cout << "----------------------------\n";
    cout << "Automovil 1 - Codigo: " << p1.codigo << ", Marca: " << p1.marca 
         << ", Modelo: " << p1.modelo << ", Periodo: " << p1.periodo 
         << ", Placa: " << p1.placa << endl;

    cout << "Automovil 2 - Codigo: " << p2.codigo << ", Marca: " << p2.marca 
         << ", Modelo: " << p2.modelo << ", Periodo: " << p2.periodo 
         << ", Placa: " << p2.placa << endl;

    cout << "Automovil 3 - Codigo: " << p3.codigo << ", Marca: " << p3.marca
         << ", Modelo: " << p3.modelo << ", Periodo: " << p3.periodo
         << ", Placa: " << p3.placa << endl;


    return 0;
}


    

