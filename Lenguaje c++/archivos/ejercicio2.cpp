#include <iostream>
#include  <fstream>
using namespace std;

main(){
    //crear un archivo que permite solo leer
    ifstream archivoSalida;
    //abrir el archivo
    archivoSalida.open("ejemplo.txt");
    //Verificar que el archivo se abra correctamente
    if(archivoSalida.is_open()){
        //ponemos un string para agregar el texto´
        string linea;
        //leer archivo por linea usamos un getline
        while(getline(archivoSalida,linea)){
            cout << "Leido: " <<linea << endl;
        }
          //cerramos el archivo
    archivoSalida.close();
    cout << "Texto escrito en el archivo con exito." <<endl;
    }
else{
    cout<<"No se pudo abrir el archivo." << endl;
}
return 0;
}