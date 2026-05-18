//Haz un programa que reciba una temperatura en Celsius,
//calcula y muestra esta temperatura en Fahrenheit.
//Se sabe que f =180(c + 32)/100.
#include<iostream>
#include<cmath>
using namespace std;
int main() {
    float Celsius, Fahrenheit;
    cout<<"Ingrese una temperatura en celsius: "<<endl;
    cin>>Celsius;
    Fahrenheit=(Celsius+32)*180/100;
    cout<<"La temperatura en Fahrenheit es: "<<Fahrenheit<<endl;
    return 0;
}
// Created by Cristkito on 16/04/2026.
//
