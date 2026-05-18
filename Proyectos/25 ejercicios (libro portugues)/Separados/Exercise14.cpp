//Hacer un programa que reciba el año de nacimiento de una persona y el
//año en curso, Calcular y mostrar:
//A) la edad de esa persona en años;
//B) la edad de esa persona en meses;
//C) la edad de esa persona en días;
//D) la edad de esa persona en semanas.
#include <iostream>
#include<cmath>
using namespace std;
int main() {
    float An,Aa;
    int a,m,d,s;
    cout<<"Introduce tu año de nacimiento"<<endl;
    cin>>An;
    cout<<"Introduce el año actual"<<endl;
    cin>>Aa;
    a=Aa-An,m=a*12,d=a*365,s=a*52;
    cout<<"Tienes "<<a<<" años"<<endl<<"Tienes "<<m<<" meses"<<endl;
    cout<<"Tienes "<<d<<" dias"<<endl<<"Tienes "<<s<<" semanas"<<endl;
    return 0;
}
// Created by Cristkito on 16/04/2026.
//
