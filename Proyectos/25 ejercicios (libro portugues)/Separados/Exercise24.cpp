//Hacer un programa que reciba una cantidad en reales, convertir los reales en:
//dolares, marcos alemanes y libras esterlinas. Se sabe que el cambio de:
//Dolar a reales es: $1,80, marco alemán a reales es: 2,00 y la libra esterlina a reales es: 1,57.
//El programa debe hacer las conversiones y mostrarlas.
//Reales=R, Dolares=D, Marco alemán=M, Libra esterlina=L
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main () {
    float R, D, M, L;
    do {
        cout<<"Ingrese los reales que tiene: "<<endl;
        cin>>R;
        if (R<0) {
            cout<<"Error: los reales deben ser de valor positivo"<<endl;
        }
    }while (R<0);
    D=R/1.80, M=R/2, L=R/1.57;
    cout<<fixed<<setprecision(2);
    cout<<"Al convertir los reales en otras monedas: "<<endl;
    cout<<"A dolares serian: "<<D<<" dolares"<<endl;
    cout<<"A marcos alemanes serian: "<<M<<" marcos alemanes"<<endl;
    cout<<"A libras esterlinas serian: "<<L<<" libras esterlinas"<<endl;
    return 0;
}
// Created by Cristkito on 16/04/2026.
//
