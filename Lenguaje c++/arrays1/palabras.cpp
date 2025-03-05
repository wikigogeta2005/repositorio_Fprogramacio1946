#include <iostream>
using namespace std;

void llenarCadena(char cad[], int n = 50) {
    cout << "Ingresa una palabra: ";
    cin.getline(cad, n);
    cin.clear();  
}

int longitudCadena(char cad[]) {
    int contador = 0;
    for (int i = 0; cad[i] != '\0'; i++) {
        contador++;
    }
    return contador;
}

bool vocal(char voc){
    return (voc=='a'||voc=='e'||voc=='i'||voc=='o'||voc=='u');

}

int contadorPalabras(char cad[]) {
 
        char voc = cad[0]; 

        if (vocal(voc)) {
            cout << "Es una vocal." << endl;
        } else {
            cout << "No es una vocal, es una palabra." << endl;
        }
    


    int palabras = 0;
    bool Palabra = false;  

    for (int i = 0; cad[i] != '\0'; i++) {
        if (cad[i] != ' ' && !Palabra) {  
            palabras++;                    
            Palabra = true;                
        } else if (cad[i] == ' ') {           
            Palabra = false;               
        }
    }
    return palabras;
}


int main() {
    char palabras[50];
    llenarCadena(palabras);
    cout << "La cadena ingresada es: " << palabras << endl;
    cout << "La longitud de la cadena es: " << longitudCadena(palabras) << endl;
    cout << "La cantidad de palabras es: " << contadorPalabras(palabras) << endl;



}