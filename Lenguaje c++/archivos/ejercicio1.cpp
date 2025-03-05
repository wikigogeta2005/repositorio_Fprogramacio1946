#include <iostream>
#include  <fstream>
using namespace std;

main(){
    //a ver lo que entiendo es que ifstream solo es para leer archivos no modifica mientras el ofstream escribe pero no modifica el archivo ya creado
    //Creacion del archivo y Si quieres modificar un archivo sin perder su contenido
    ofstream archivoSalida;
    //para crear el archivo txt
    archivoSalida.open("ejemplo.txt");
    //para verificar que el archivo se abrio correctamente
    if(archivoSalida.is_open()){
         // escribir texto en el archivo
         archivoSalida << "Hola, mundo!" << endl;
         archivoSalida << "Esto es una prueba." << endl;
         archivoSalida << "Linea 3." << endl;

    //para cerrar el archivo
    archivoSalida.close();
    cout << "Texto escrito en el archivo con exito." <<endl;
    }
    else{
        cout<<"No se pudo abrir el archivo." << endl;
    }
    return 0;
}