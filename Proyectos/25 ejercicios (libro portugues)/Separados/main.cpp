#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main() {
    int opcion;

    do {
        system("cls");

        cout << "================================" << endl;
        cout << "     MENU DE EJERCICIOS         " << endl;
        cout << "================================" << endl;

        for (int i = 1; i <= 25; i++) {
            cout << i << ". Exercise " << i << endl;
        }

        cout << "0. Salir" << endl;
        cout << "================================" << endl;
        cout << "Seleccione un ejercicio (0-25): ";
        cin >> opcion;
        cin.ignore();

        if (opcion == 0) {
            cout << "Saliendo..." << endl;
            break;
        }

        if (opcion < 1 || opcion > 25) {
            cout << "Opcion invalida. Presione Enter para continuar...";
            cin.get();
            continue;
        }

        string comando = "Exercise" + to_string(opcion) + ".exe";
        cout << "\nAbriendo Exercise " << opcion << "..." << endl;
        system(comando.c_str());

        cout << "\nPresione Enter para volver al menu...";
        cin.get();

    } while (opcion != 0);

    return 0;
}