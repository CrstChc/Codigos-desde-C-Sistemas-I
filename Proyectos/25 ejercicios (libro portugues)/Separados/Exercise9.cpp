//Hacer un programa que calcula y muestra el área de un trapecio.
//Se sabe que: a = ((base mayor + base menor) * altura)/2
#include <iostream>
using namespace std;
int main() {
        float B,b,h;
        cout<<"Introduce base mayor, base menor y altura"<<endl;
        cin>>B>>b>>h;
        float A=(B+b)/2*h;
        cout<<"El area del trapecio es: "<<A<<endl;
        return 0;
}
// Created by Cristkito on 16/04/2026.
//
