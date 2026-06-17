#include <iostream>
using namespace std;
int main() {
    int A[5] = {10,20,30,40,50}, B[5] = {15,25,35,45,55}, C [10];
   for (int i = 0; i < 10; i++) {
       if ((i+1)%2 == 1) {
           C[i] = A[(i+1)/2];
       } else {
           C[i] = B[i/2];
       }
   }
    for (int i = 0; i < 10; i++) {
        cout << C[i] << " ";
    }
    return 0;
}

// Juntar vectores A y B a un C intercalado 10,15,20,25,30,35, salida 10 numeros distintos