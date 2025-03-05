#include <iostream>
#include <stdlib.h>
#include "ahorcado.h"
using namespace std;

string palabraaleatoria(string palabras[]){
    int numero=rand() %5;
    return palabras[5];
}

int opciones(){
    int op;
    cout<<"1. Deportes"<<endl;
    cout<<"2. Animales"<<endl;
    cout<<"3. Frutas"<<endl;
    cin>>op;
    return op;
}

main(){
    string palabras[5],palabraSeleccionada;
    int op;
    cout<<"Juego del ahorcado"<<endl;
    cout<<"------------------------------"<<endl;
    cout<<"Elige una opcion"<<endl;
    op=opciones();
    (op==1)?deportes(palabras): (op==2)? animales(palabras): frutas(palabras);
    palabraSeleccionada= palabraaleatoria(palabras);
    cout<<"palabraSeleccionada"<<palabraSeleccionada;

}