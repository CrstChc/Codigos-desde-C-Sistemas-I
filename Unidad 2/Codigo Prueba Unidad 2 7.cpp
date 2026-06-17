#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int A [5] = {10,20,30,40,50}, Escalar;
    cin>>Escalar;
    for (int i = 0; i < 5; i++) {
        A[i] = A[i] * Escalar;
    }
    for (int i = 0; i < 5; i++) {
        cout << A[i] << endl;
    }
    return 0;
}

// Escalar DE VECTORES (MULTIPLICACIÓN)