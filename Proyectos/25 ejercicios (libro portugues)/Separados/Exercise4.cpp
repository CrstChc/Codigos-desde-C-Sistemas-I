// Haga un programa que obtenga dos grados, calcule y
// muestre el promedio ponderado de esto Notas,
// considerando el peso 2 para la primera nota y el peso 3 para la segunda nota.
#include <iostream>
using namespace std;
int main() {
    float x,y,R;
    cout<<"Ingrese dos notas: "<<endl;
    cin>>x>>y;
    R=(x*2+y*3)/(2+3);
    cout<<"La media ponderada es:"<<R<<endl;
    return 0;
}//
// Created by Cristkito on 16/04/2026.
//
