#include <iostream>
using namespace std;
int main() {
    int A[5] = {20,10,50,40,60}, Menor=0, Mayor=0, Ind1, Ind2;
    for (int i = 0; i < 5; i++) {
        Menor += A[i];
    }
    for (int i = 0; i < 5; i++) {
        if (A[i]>Mayor) {
            Mayor = A[i], Ind1 = i;
        }
    }
    for (int i = 0; i < 5; i++) {
        if (A[i]<Menor) {
            Menor = A[i], Ind2 = i;
        }
    }
    cout <<"El mayor valor es "<<Mayor<<", se ubica en el vector "<<Ind1<<endl;
    cout <<"El menor valor es "<<Menor<<", se ubica en el vector "<<Ind2<<endl;
    cout <<"La suma de ambos valores es: "<<Menor+Mayor<<endl;
    return 0;
}

//Busqueda Lineal Mayor Valor, Menor Valor y su Suma