//Hacer un programa que recibe el salario mínimo y el valor del
//salario de un empleado, calcular y mostrar la cantidad de
//salarios mínimos que el empleado gana.
#include <iostream>
#include<cmath>
using namespace std;
int main() {
    float Sm,Se;
    cout<<"Introduce el salario mínimo"<<endl;
    cin>>Sm;
    cout<<"Introduce el salario de un empleado de la empresa"<<endl;
    cin>>Se;
    float A=(Se/Sm);
    cout<<"El salario de un empleado de la empresa gana "<<A<<" veces el salario mínimo"<<endl;
    return 0;
}
// Created by Cristkito on 16/04/2026.
//
