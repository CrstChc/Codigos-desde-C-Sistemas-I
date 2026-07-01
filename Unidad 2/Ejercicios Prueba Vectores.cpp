#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cout<<"Ingrese la cantidad de valores: ";
    cin>>n;
    int  A[n];
    cout<<"Ingrese los valores del vector: ";
    for (int i=0; i<n; i++) {
        cin>>A[i];
    }
    cout<<"Los valores pares son: ";
    for (int i=0; i<n;i++) {
        if (A[i]%2 == 0) {
            cout<<A[i]<<" ";
        }
    }
    cout<<endl<<"Los valores negativos son: ";
    for (int i=0; i<n;i++) {
        if (A[i]<0) {
            cout<<A[i]<<" ";
        }
    }
    return 0;
}