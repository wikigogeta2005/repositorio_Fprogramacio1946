#include <iostream>
using namespace std;
struct persona{
    string nombre="Sin nombre";
    int edad=0; 
    float estatura=0.0;
}p1,p2;

 struct{
    string nombre;
    float nota;
 }e1,e2;

 void registro(){
    persona p5, p6;
 }

main(){
    /*typedef persona personas;
    typedef int entero;
    int a,b;
    entero c,d;*/
    persona p3,p4;
    p3.nombre="Carlos Ortiz";
    p3.edad=28;
    p3.estatura=1.90;
    cout << "Nombre: "<< p3.nombre << "\t";
    cout << "Edad: "<< p3.edad << "\t";
    cout << "Estatura: "<< p3.estatura << "\n";
    cout << "Datos persona2: "<< endl;
    cout << "Nombre: ";
    getline(cin, p4.nombre);
    cout << "Edad: ";
    cin >> p4.edad;
    cout << "Estatura: ";
    cin >> p4.estatura;
    cout << "Nombre: "<< p4.nombre << "\t";
    cout << "Edad: "<< p4.edad << "\t";
    cout << "Estatura: "<< p4.estatura << "\n";
    cout<<"Datos del estudiante No1"<<endl;
    cout << "Nombre: ";
    cin.ignore();
    getline(cin,e1.nombre);
    cout << "Nota: ";
    cin>>e1.nota;

}