#include <iostream>
#include <string>
using namespace std;

void llenardatos(string &cadena)
{
    cout << "Ingresa la cadena: ";
    getline(cin, cadena); 
}

void remplazo(string &cadena)
{
    string palabracambio, nuevapalabra;
    cout << "Que palabra deseas cambiar: ";
    getline(cin, palabracambio);
    cout << "Con que nueva palabra deseas cambiar: ";
    getline(cin, nuevapalabra);

    size_t pos = cadena.find(palabracambio);  

   
    (pos != string::npos && 
     (pos == 0 || cadena[pos - 1] == ' ') && 
     (pos + palabracambio.length() == cadena.length() || cadena[pos + palabracambio.length()] == ' ')) 
    ? cout << "Cadena modificada: " << cadena.replace(pos, palabracambio.length(), nuevapalabra) << endl
    : cout << "No se encontro la palabra en la cadena." << endl;
}

int main()
{
    string cadena;
    llenardatos(cadena); 
    remplazo(cadena);     
    return 0;
}