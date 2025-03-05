#include <iostream>
#include <cstring>
#include <cctype>  // Para funciones como isalnum, isalpha, etc.
using namespace std;

int comparacadenas(char cad1[], char cad2[]) {
    return strcmp(cad1, cad2);  // Comparar cadenas
}

void copiaCadena(char cad1[], char cad2[]) {
    strcpy(cad1, cad2);
}

void anadeCadena(char cad1[], char cad2[]) {
    strcat(cad1, cad2);
}

bool alfabeticonumerico(char cad1[]) {
    bool alfanumerico = true;
    for (int i = 0; i < strlen(cad1); i++) {
        if (isalnum(cad1[i]) == false) {
            alfanumerico = false;
            break;
        }
    }
    return alfanumerico;
}

bool alfabetico(char cad1[]) {
    bool alfa = true;
    for (int i = 0; i < strlen(cad1); i++) {
        if (isalpha(cad1[i]) == false && isblank(cad1[i]) == false) {
            alfa = false;
            break;
        }
    }
    return alfa;
}

bool numerico(char cad1[]) {
    bool numerico = true;
    for (int i = 0; i < strlen(cad1); i++) {
        if (isdigit(cad1[i]) == false) {
            numerico = false;
            break;
        }
    }
    return numerico;
}

bool esespacio(char cad1[]) {
    bool espacio = true;
    for (int i = 0; i < strlen(cad1); i++) {
        if (isspace(cad1[i]) == false) {
            espacio = false;
            break;
        }
    }
    return espacio;
}

bool esmayusculas(char cad1[]) {
    bool mayuscula = true;
    for (int i = 0; i < strlen(cad1); i++) {
        if (isupper(cad1[i]) == false) {
            mayuscula = false;
            break;
        }
    }
    return mayuscula;
}

bool esminuscula(char cad1[]) {
    bool minuscula = true;
    for (int i = 0; i < strlen(cad1); i++) {
        if (islower(cad1[i]) == false) {
            minuscula = false;
            break;
        }
    }
    return minuscula;
}

int main() {
    int comparacion;
    char cad1[50], cad2[50];

    cout << "Ingrese la primera cadena: ";
    cin.getline(cad1, 50);
    cout << "Ingrese la segunda cadena: ";
    cin.getline(cad2, 50);

    comparacion = comparacadenas(cad1, cad2);
    cout << "Comparacion: " << comparacion << endl;
    (comparacion == 0) ? cout << "Las cadenas son iguales" : cout << "Las cadenas son diferentes";

    // Usando las demás funciones
    (alfabeticonumerico(cad1)) ? cout << "\nLa cadena es alfanumerica" : cout << "\nLa cadena No es alfanumerica";
    (alfabetico(cad1)) ? cout << "\nLa cadena es alfabetica" : cout << "\nLa cadena No es alfabetica";
    (numerico(cad1)) ? cout << "\nLa cadena es numerica" : cout << "\nLa cadena No es numerica";
    (esespacio(cad1)) ? cout << "\nLa cadena tiene solo espacios" : cout << "\nLa cadena No tiene solo espacios";
    (esmayusculas(cad1)) ? cout << "\nLa cadena esta en mayusculas" : cout << "\nLa cadena No esta en mayusculas";
    (esminuscula(cad1)) ? cout << "\nLa cadena esta en minusculas" : cout << "\nLa cadena No esta en minusculas";

    return 0;
}
