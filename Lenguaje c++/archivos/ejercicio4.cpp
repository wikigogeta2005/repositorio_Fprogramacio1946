#include <iostream>
#include  <fstream>
#include <string>
using namespace std;

main(){
    //usamos el fstream para leer y modificar un archivo
    fstream archivo;
    string frase,nomarchivo;
    cout<<"Ingrese el nombre del archivo con extension: ";
    cin>>nomarchivo;
    cin.ignore();

    //ingreso de una frase por el usuario
    cout<<"Ingrese la frase que desea: ";
    getline(cin,frase);

    //abrir el archivo y que permite el ingreso de escritura el ios::out sirve para crear el archivo si no existe
    archivo.open(nomarchivo.c_str(), ios::out | ios::app);
    //verificamos si el archivo se abre correctamente
    if(archivo.is_open()){
        archivo <<frase<<endl;

    //cerramos el archivo
    archivo.close();
    } else {
        cout << "No se pudo abrir el archivo para escribir." << endl;
        return 1;
    }

    //abrir el archivo en modo lectura con un ifstream o con un ios::in
    archivo.open("ejemplo.txt", ios::in);
    if(archivo.is_open()){
        string linea;
        cout << "\nContenido del archivo:" <<endl;
        while (getline(archivo, linea)){
            cout << linea << endl;
        }
        archivo.close();
    } else{
        cout << "No se pudo abrir el archivo para leer." <<endl;
    }
    return 0;
}

