// Hacer un programa que obtiene el precio de un producto,
// calcular y mostrar el nuevo precio.
// Se sabe que recibió un descuento del 10%.
#include <iostream>
using namespace std;
int main() {
    float x,R,D;
    cout<<"Ingrese el precio del producto: "<<endl;
    cin>>x;
    D=x/10,R=(x-D);
    cout<<"El descuento es"<<endl<<"El precio final es:"<<R<<endl;
    return 0;
}//
// Created by Cristkito on 16/04/2026.
//
