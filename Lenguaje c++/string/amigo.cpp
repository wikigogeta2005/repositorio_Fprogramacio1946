#include <iostream>
#include <string> // Necesitamos esta librería para trabajar con cadenas
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
    cin >> palabracambio;
    cout << "Con que nueva palabra deseas cambiar: ";
    cin >> nuevapalabra;

    size_t pos = cadena.find(palabracambio);

    
    (pos == string::npos) 
        ? cout << "No se encontro la palabra en la cadena." << endl
        : cout << "Reemplazar por: " << cadena.replace(pos, palabracambio.length(), nuevapalabra) << endl;
}

int main()
{
    string cadena;
    llenardatos(cadena); 
    remplazo(cadena);     
    return 0;
}
