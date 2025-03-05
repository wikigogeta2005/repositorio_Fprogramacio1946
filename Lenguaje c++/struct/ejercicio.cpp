#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct estudiante {
    string nombres;
    int id;
    float nota;
};

void ingreso(estudiante student[], int &n) {
    for (int i = 0; i < n; i++) {
        cout << "\nIngrese el id del estudiante: ";
        cin >> student[i].id;
        cin.ignore();  // Evita problemas con getline()

        cout << "Ingrese el nombre y apellido del estudiante: ";
        getline(cin, student[i].nombres);

        cout << "Ingrese la nota del estudiante: ";
        cin >> student[i].nota;
    }
}

void mostrarregistro(estudiante student[], int n) {
    if (n == 0) {
        cout << "\nNo hay estudiantes registrados.\n";
        return;
    }

    cout << "\nLista de estudiantes registrados:\n";
    cout << left << setw(5) << "ID"
         << setw(20) << "NOMBRES"
         << setw(10) << "NOTA" << endl;
    cout << string(35, '-') << endl;

    for (int i = 0; i < n; i++) {
        cout << left << setw(5) << student[i].id
             << setw(20) << student[i].nombres
             << setw(10) << student[i].nota << endl;
    }
}

int BuscarestudianteID(estudiante student[], int n, int id) {
    for (int i = 0; i < n; i++) {
        if (student[i].id == id) {
            return i; // Devuelve la posición en el arreglo
        }
    }
    return -1; // No encontrado
}

void modificacion(estudiante student[], int n) {
    int id, op;
    cout << "\nIngrese el ID del estudiante a modificar: ";
    cin >> id;

    int index = BuscarestudianteID(student, n, id);
    if (index == -1) {
        cout << "Estudiante no encontrado.\n";
        return;
    }

    cout << "\nEstudiante encontrado: " << student[index].nombres;
    cout << "\n¿Qué desea modificar?\n1. Nombre\n2. Nota\nOpción: ";
    cin >> op;
    cin.ignore(); // Para evitar problemas con getline()

    switch (op) {
        case 1:
            cout << "Ingrese el nuevo nombre: ";
            getline(cin, student[index].nombres);
            break;
        case 2:
            cout << "Ingrese la nueva nota: ";
            cin >> student[index].nota;
            break;
        default:
            cout << "Opción inválida.\n";
    }
}

void menu(estudiante estudiantes[], int &n) {
    int opcion;
    do {
        cout << "\n===== MENÚ PRINCIPAL =====\n";
        cout << "1. Ingresar estudiantes\n";
        cout << "2. Mostrar estudiantes\n";
        cout << "3. Modificar estudiante\n";
        cout << "4. Salir\n";
        cout << "Ingrese su opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese el número de estudiantes a registrar: ";
                cin >> n;
                ingreso(estudiantes, n);
                break;
            case 2:
                mostrarregistro(estudiantes, n);
                break;
            case 3:
                modificacion(estudiantes, n);
                break;
            case 4:
                cout << "Saliendo del programa...\n";
                break;
            default:
                cout << "Opción inválida. Intente de nuevo.\n";
        }
    } while (opcion != 4);
}

int main() {
    int n = 0;
    estudiante estudiantes[100]; // Arreglo con tamaño máximo de 100
    menu(estudiantes, n);
    return 0;
}
