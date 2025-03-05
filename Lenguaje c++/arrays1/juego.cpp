#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void nivel(int &dificultad) {
    cout << "Elige la dificultad con la que deseas jugar (1: Principiante, 2: Avanzado, 3: Experto): ";
    cin >> dificultad;

    switch (dificultad) {
        case 1:
            cout << "Elegiste la dificultad Principiante." << endl;
            break;
        case 2:
            cout << "Elegiste la dificultad Avanzado." << endl;
            break;
        case 3:
            cout << "Elegiste la dificultad Experto." << endl;
            break;
        default:
            cout << "No ingresaste una dificultad válida. Se usara Principiante por defecto." << endl;
            dificultad = 1;
            break;
    }
}

void eleccionpersona(char &eleccion) {
    cout << "Elige un elemento para jugar (piedra 'p', papel 'h', tijera 't'): ";
    cin >> eleccion;

    switch (eleccion) {
        case 'p':
            cout << "Tu elegiste piedra." << endl;
            break;
        case 'h':
            cout << "Tu elegiste papel." << endl;
            break;
        case 't':
            cout << "Tu elegiste tijera." << endl;
            break;
        default:
            cout << "No elegiste un elemento valido." << endl;
            eleccion = 'x';  // Marcar como inválida
            break;
    }
}

char eleccionmaquina() {
    int opciones = rand() % 3;  // Genera un número entre 0 y 2

    switch (opciones) {
        case 0:
            cout << "La computadora eligio piedra." << endl;
            return 'p';
        case 1:
            cout << "La computadora eligio papel." << endl;
            return 'h';
        case 2:
            cout << "La computadora eligio tijera." << endl;
            return 't';
    }
    return 'p';  
}

void determinarGanador(char usuario, char maquina, int &victorias_usuario, int &victorias_maquina) {
    if (usuario == 'x') {
        cout << "No se puede determinar el ganador debido a una elección inválida." << endl;
        return;
    }

    if (usuario == maquina) {
        cout << "¡Es un empate!" << endl;
    } else if ((usuario == 'p' && maquina == 't') ||
               (usuario == 'h' && maquina == 'p') ||
               (usuario == 't' && maquina == 'h')) {
        cout << "Genial , ganaste esta ronda" << endl;
        victorias_usuario++;
    } else {
        cout << "La computadora gana esta ronda." << endl;
        victorias_maquina++;
    }
}

void jugarRondas(int num_rondas, int dificultad) {
    int victorias_usuario = 0;
    int victorias_maquina = 0;
    char eleccion_usuario, eleccion_pc;

    for (int ronda = 1; ronda <= num_rondas; ronda++) {
        cout << "\nRonda " << ronda << ":\n";
        eleccionpersona(eleccion_usuario); 
        eleccion_pc = eleccionmaquina();    
        determinarGanador(eleccion_usuario, eleccion_pc, victorias_usuario, victorias_maquina);
    }

    cout << "\nResultados finales después de " << num_rondas << " rondas:" << endl;
    cout << "Victorias del jugador: " << victorias_usuario << endl;
    cout << "Victorias de la computadora: " << victorias_maquina << endl;

    if (victorias_usuario > victorias_maquina) {
        cout << "Felicidades, has ganado el juego" << endl;
    } else if (victorias_usuario < victorias_maquina) {
        cout << "Oh vaya la computadora te ha ganado ." << endl;
    } else {
        cout << "Fue un empato ." << endl;
    }
}

int main() {
    srand(time(0));  

    int dificultad;
    nivel(dificultad);  

    int num_rondas = 5;  
    jugarRondas(num_rondas, dificultad); 

    return 0;
}