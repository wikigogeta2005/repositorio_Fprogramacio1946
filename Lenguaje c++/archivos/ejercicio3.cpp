#include <iostream>
#include  <fstream>
using namespace std;
//archivo para agregar texto y que no altere al txt

main(){
    //Crear un archivo que ingrese texto 
    // ya entendi osea sin ios borra lo que ya estaba y pone el nuevo contenido mientras con el ios pone lo nuevo que quiero poner
    ofstream archivoSalida;
    //abrir el archivo con un ajuste pondremos un ios::app como append(agregar) al final sin que altere al tecto que ya esta
    archivoSalida.open("ejemplo.txt",ios::app);
    //verificar que el archivo se abrio correctamente 
    if(archivoSalida.is_open()){
        archivoSalida<<"Texro agregado al final\n";
        archivoSalida << "Otra linea mas." <<endl;
        archivoSalida << "Otra linea mas." <<endl;
        archivoSalida.close();
        cout << "Texto agregado con exito." <<endl;
    } else{
        cout << "No se pudo abrir el archivo." <<endl;
    }
    return 0;
        

    }

    