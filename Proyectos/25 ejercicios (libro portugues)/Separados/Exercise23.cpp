//Escribir la medida de dos ángulos de un triángulo para calcular y mostrar la medida del tercero
//La suma de los 3 angulos es 180°.
#include<iostream>
#include<cmath>
using namespace std;
int main () {
    int anguloA,anguloB,anguloC;
    do {
        cout<<"Ingrese dos angulos: "<<endl;
        cin>>anguloA>>anguloB;
        if (anguloA<1 || anguloB<1) {
            cout<<"Error, los angulos deben ser mayores o iguales a 1"<<endl;
        } else if (anguloA+anguloB>179) {
            cout<<"Error, la suma de ambos angulos no debe ser mayor a 180"<<endl;
        }
    } while (anguloA<1 || anguloB<1 || anguloA+anguloB>179);
    anguloC=180-anguloA-anguloB;
    cout<<"El angulo C tiene "<<anguloC<<" grados"<<endl;
}
// Created by Cristkito on 16/04/2026.
//
