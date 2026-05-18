// Un empleado recibe un salario fijo más una comisión del 4%
// sobre las ventas. hacer un programa que recibe el salario fijo
// de un empleado y el valor de sus ventas. calcular
// La comisión y el último sueldo del funcionario.
#include <iostream>
using namespace std;
int main() {
    float S,V,G,C;
    cout<<"Ingrese su salario: "<<endl;
    cin>>S;
    cout<<"Ingrese el valor de las ventas totales: "<<endl;
    cin>>V;
    C=V*4/100;
    G=C+S;
    cout<<"La comisión es: "<<C<<endl<<"El sueldo final es: "<<G<<endl;
    return 0;
}
// Created by Cristkito on 16/04/2026.
//
