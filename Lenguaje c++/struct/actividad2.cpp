#include <iostream>
#include <string.h>
using namespace std;

struct credito{
    string nombres;
    int numetarjeta;
    float saldo;
    string Fechadevencimiento;

};

main(){
    credito p1,p2,p3;

    cout<<"Registro de la tarjeta de credito\n";
    cout<<"--------------------------------\n";
    cout<<"Ingrese sus nombres por favor: ";
    getline(cin,p1.nombres);
    cout<<"Ingrese su numero de la tarjeta: ";
    cin>>p1.numetarjeta;
    cin.ignore();
    cout<<"Ingrese su saldo: ";
    cin>>p1.saldo;
    cin.ignore();
    cout<<"Su fecha de vencimiento de su tarjeta:";
    getline(cin,p1.Fechadevencimiento);

    cout<<"--------------------------------\n";

    cout<<"Ingrese sus nombres por favor: ";
    getline(cin,p2.nombres);
    cout<<"Ingrese su numero de la tarjeta: ";
    cin>>p2.numetarjeta;
    cin.ignore();
    cout<<"Ingrese su saldo: ";
    cin>>p2.saldo;
    cin.ignore();
    cout<<"Su fecha de vencimiento de su tarjeta:";
    getline(cin,p2.Fechadevencimiento);

    cout<<"--------------------------------\n";

    p3.nombres="Kenai Ramirez";
    p3.numetarjeta=13456784;
    p3.saldo=120.00;
    p3.Fechadevencimiento=17-11-2025;

    cout << "\nRegistro completado:\n";
    cout << "----------------------------\n";
    cout << "Cliente 1 - Nombres: " << p1.nombres << ", Numero de Tarjeta: " << p1.numetarjeta 
         << ", Saldo: " << p1.saldo << ", Fecha de Vencimiento: " << p1.Fechadevencimiento
         << endl;

    cout << "Cliente 2 - Nombres: " << p2.nombres << ", Numero de Tarjeta: " << p2.numetarjeta 
         << ", Saldo: " << p2.saldo << ", Fecha de Vencimiento: " << p2.Fechadevencimiento
         << endl;

         cout << "Cliente 3 - Nombres: " << p3.nombres << ", Numero de Tarjeta: " << p3.numetarjeta 
         << ", Saldo: " << p3.saldo << ", Fecha de Vencimiento: " << p3.Fechadevencimiento
         << endl;

   


    return 0;


}