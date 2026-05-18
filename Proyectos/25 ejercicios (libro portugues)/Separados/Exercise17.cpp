//Hacer un programa que recibe el radio, calcular y mostrar:
//A) la longitud de una esfera, se sabe que c = 2 r;
//B) el área de una esfera, se sabe que a = d r?;
//C) el volumen de una esfera, conocida por ser v = 3/4 r3.
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float pi, R, L, A, V;
    pi=3.1415;
    cout<<"Ingrese el radio de la esfera"<<endl;
    cin>>R;
    L=2*pi*R, A=pi*pow(R,2), V=3*pi*pow(R,3)/4;
    cout<<"La longitud de la esfera es: "<<L<<endl<<"El area de la esfera es: "<<A<<endl;
    cout<<"El volumen de la esfera es: "<<V;
    return 0;
}
// Created by Cristkito on 16/04/2026.
//
