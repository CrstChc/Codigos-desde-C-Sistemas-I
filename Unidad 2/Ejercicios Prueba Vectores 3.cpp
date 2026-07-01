#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    double masalto = 0, tallaprom=0;
    char jugadoralto [20];
    cout<<"Ingrese la cantidad de jugadores: ";
    cin>>n;
    double  talla[n];
    char jugadores[n] [20];
    for (int i=0; i<n; i++) {
        cout<<"Nombre de jugador "<<i+1<<": ";
        cin>>jugadores[i];
        cout<<"Talla de jugador "<<i+1<<": ";
        cin>>talla [i];
        tallaprom += talla[i];
    }
    tallaprom /= n, masalto=talla[0], jugadoralto=jugadores[0];
    for (int i=1; i<n; i++) {
        if (talla [i-1] < talla [i]) {
            masalto = talla[i];
            jugadoralto=jugadores[i];
        }
    }
    cout<<"El jugador mas alto es " jugadoralto<<" con una talla de "<<masalto<<endl;
    cout<<"La talla promedio es: "<<tallaprom<<endl;
    return 0;
}
