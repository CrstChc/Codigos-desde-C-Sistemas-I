#include <iostream>
#include <cstring>
using namespace std;
int main() {
    int n;
    double masalto = 0, tallaprom = 0;
    char jugadoralto[20];
    cout << "Ingrese la cantidad de jugadores: ";
    cin >> n;
    double talla[n];
    char jugadores[n][20];
    for (int i = 0; i < n; i++) {
        cout << "Nombre del jugador " << i+1 << ": ";
        cin >> jugadores[i];
        cout << "Talla del jugador " << i+1 << ": ";
        cin >> talla[i];
        tallaprom += talla[i];
    }
    tallaprom /= n;
    masalto = talla[0];
    strcpy(jugadoralto, jugadores[0]);
    for (int i = 1; i < n; i++) {
        if (talla[i] > masalto) {
            masalto = talla[i];
            strcpy(jugadoralto, jugadores[i]);
        }
    }
    cout << "\nEl jugador mas alto es " << jugadoralto
         << " con una talla de " << masalto << endl;
    cout << "La talla promedio es: " << tallaprom << endl;
    return 0;
}