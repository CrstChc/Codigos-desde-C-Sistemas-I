#include <iostream>
using namespace std;
int main() {
    int n, valor, suma=0;
    cin>>n>>valor;
    int A [n];
    for (int i=0; i<n;i++){
        A [i]= i*valor;
        suma+=A[i];
    }
    for (int i=0; i<n;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl<<"Sumatoria: "<<suma<<endl<<"Media aritmetica:"<<suma/n;
    return 0;
}