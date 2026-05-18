//Haga un programa que obtenga el valor de los catetos de un triángulo.
//Calcular y mostrar el Valor de la hipotenusa.
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float b,h;
    cout<<"Introduce ambos catetos de un triangulo"<<endl;
    cin>>b>>h;
    float H = sqrt(pow(b, 2) + pow(h, 2));
    cout<<"El valor de la hipotenusa es: "<<H<<endl;
    return 0;
}

// Created by Cristkito on 16/04/2026.
//
