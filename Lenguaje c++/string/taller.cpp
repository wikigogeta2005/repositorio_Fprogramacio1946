#include <iostream>
using namespace std;

int main(){
    string cadena="Informatica";
    //borramos los caracteres de la cadena
    cadena.clear();
    cout<<cadena;//No mostrara nada
    //volvemos a inicializar con un valor
    cadena="Informatica";

    //longitud de la cadena
    cout<<"La cadena "<<cadena<<" tiene "<<cadena.length()<<" caracteres "<<endl;

    //primer y ultimo caracter
    cout<<"Primer caracter: "<<cadena.front()<<endl; //Igual que cadena[0]
    cout<<"Ultimo caracter: "<<cadena.back()<<endl; //Igual que cadena[[cadena.length()-1]]

    //Añadir cadena
    cadena.append(" Moderna ");//Es lo mismo que cadena +="Moderna"
    cout<< cadena <<endl;

    //añadir un caracter
    char car='0';
    cadena.append(1,car);
    cout<< cadena<<endl;

    //volvemos a inicializar con un valor
    cadena="Informatica";

    //buscar caracteres
    if(cadena.find("i")!=-1)
        cout<<"Posicion del primer caracter i: "<<cadena.find("i")<<endl;
    cout<<"Posicion del segundo caracter i: "<<cadena.find("i",1)<<endl;

    //extraer subcadena
    string subcad;
    subcad=cadena.substr(2,3);
    cout<<subcad<<endl;
    subcad=cadena.substr(5);
    cout<<subcad<<endl;

    //Remplazar parte de la cadena
    cadena.replace(6,5,"acion");
    cout <<cadena<<endl;

    return 0;
}