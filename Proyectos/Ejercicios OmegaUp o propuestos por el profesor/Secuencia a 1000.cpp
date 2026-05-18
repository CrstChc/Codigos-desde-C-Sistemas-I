//Dada una variable con valor inicial y dos constantes, haz un programa que haga lo siguiente:
//Mientras el valor de la variable sea menor que : Si su valor es par:
//Súmale todos los enteros que existen en el rango de a.
// En caso contrario: Súmale todos los enteros que existen en el rango de a.
// Escribe un programa que imprima el valor final de la variable.
//Entrada Tres enteros. Puedes suponer que
//Salida
//Un entero que sea el valor final de la variable.
//1 5 9   1006

#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main() {
int  A,B,a,b,N;
   cin>>N>>A>>B;

    for (int i = 0; N < 1000; i++) {
        if (N % 2 == 0){
            a=A(A+1)/2;
            N= N+a;
        }
        else{
            b=B(B+1)/2;
        N= N+b;
    };
        cout << N << endl;
    }
    cout<<N;
    return 0;
}//
// Created by Cristkito on 4/05/2026.
//
