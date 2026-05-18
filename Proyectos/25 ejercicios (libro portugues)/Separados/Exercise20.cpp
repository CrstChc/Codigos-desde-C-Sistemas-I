//Hacer un programa que reciba la medida del ángulo formado por una
//escalera apoyada en el suelo y la distancia que la escalera está de la pared.
//Calcular y mostrar la medida de la escalera de modo que la punta de la escalera
//se puede alcanzar. Medición de la escalera a Distancia de la pared
#include <iostream>
#include<cmath>
using namespace std;
int main () {
    float angulo, distancia, escalera, anguloRad,pi;
    pi=3.1415;
    cout<<"Ingrese el angulo y la distancia de la escalera a la pared: "<<endl;
    cin>>angulo>>distancia;
    anguloRad = angulo * pi / 180;
    escalera = distancia / cos(anguloRad);
    cout<<"La medida de la escalera es: "<<escalera<<" metros"<<endl;
}
// Created by Cristkito on 16/04/2026.
//
