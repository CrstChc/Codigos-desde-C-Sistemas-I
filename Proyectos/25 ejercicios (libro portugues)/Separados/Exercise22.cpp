//Recibir el número de lados de un polígono convexo y calcular y mostrar el número de diagonales del polígono.
//Donde n es el número de lados del polígono. D nd = n (n-3)/2 es conocido.
//Numero de lados=Nlad, Numero de diagonales=Ndia
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int Nlad,Ndia;
    do {
        cout<<"Ingrese el número de lados del polígono: "<<endl;
        cin>>Nlad;

        if (Nlad < 3) {
            cout << "Error: El polígono no existe" << endl;
        }
    } while (Nlad < 3);
    Ndia=Nlad*(Nlad-3)/2;
    cout<<"El número total de diagonales del polígono es: "<<Ndia<<endl;
    return 0;
}
// Created by Cristkito on 16/04/2026.
//
