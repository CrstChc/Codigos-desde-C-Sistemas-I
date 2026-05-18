//Se sabe que para iluminar correctamente las habitaciones de una casa,
//por cada m2, se debe utilizar 18 w de potencia.
//Haga un programa que reciba las dos dimensiones de una habitación (en metros).
//Calcule y muestre su área (en m2) y la potencia de iluminación a utilizar.

#include<iostream>
#include<cmath>
using namespace std;
int main() {
    float a,l,W,A;
    cout<<"Ingrese el ancho y largo de la habitación: "<<endl;
    cin>>a>>l;
    A=a*l,W=18*A;
    cout<<"Se necesitaran "<<W<<" para iluminar la habitación"<<endl;
    return 0;
}
// Created by Cristkito on 16/04/2026.
//
