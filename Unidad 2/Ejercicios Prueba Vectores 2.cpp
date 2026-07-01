#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    bool igual = true;
    cout<<"Ingrese la cantidad de valores: ";
    cin>>n;
    int  A[n], B[n];
    cout<<"Ingrese los valores del vector A: ";
    for (int i=0; i<n; i++) {
        cin>>A[i];
    }
    cout<<"Ingrese los valores del vector B: ";
    for (int i=0; i<n; i++) {
        cin>>B[i];
    }
    for (int i=0; i<n;i++) {
        if (A[i] == B[i]) {
            igual = true;
        } else { igual = false; }
    }
    if (igual == true) {
        cout<<"Los vectores son iguales";
    } else {
        cout<<"Los vectores no son iguales";
    }
    return 0;
}
