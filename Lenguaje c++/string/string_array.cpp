#include <iostream>
using namespace std;

void cambiarString(string &nombre){//poner el amperson para que se referencie 
    nombre= "Sin nombre ";
    cout<<"Corrige tu nombre por favor";
    getline(cin,nombre);

}
//cadena string se lo envia por referencia

void cambiararray(char apellido[]){
    /*apellido[0]='R';
    apellido[1]='a';
    apellido[2]='m';
    apellido[3]='i';
    apellido[4]='r';
    apellido[5]='e';
    apellido[6]='z';
    apellido[7]='\0'; //caracter nulo*/
    cout<<"Ingresa el nuevo apellido: ";
    cin.getline(apellido,20);



}
main(){

    string nombres,apodo;
    string curso[5]={"c++","Java","Python","C#","PHP"};
    char apellido[20],apodo1[20];
    cout<<"Ingrese sus nombre: ";
    getline(cin,nombres);
    cambiarString(nombres);
    cout<<"Su nombre es luego de llamar a la funcion:  "<<nombres<<endl;
    cout<<"Su apellido es : "<<apellido<<endl;
    cin.getline(apellido,20);
    cambiararray(apellido);
    cout<<"Su apellido es luego de llamar a la funcion:  "<<apellido<<endl;
 

}