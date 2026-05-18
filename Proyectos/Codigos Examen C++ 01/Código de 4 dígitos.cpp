#include <iostream>
using namespace std;
int main() {
    int  A,B,C;
    do {
        cout<<"Ingrese un numero de cuatro dígitos: "<<endl;
        cin>>A;
    }while (A>=10000 || A<1000);
    B=A/100,C=A%100;
    (B/10)%2==0?cout<<"Grupo 1: "<<B<<" (es par)"<<endl<<"Resultado: "<<B+1<<endl:cout<<"Grupo 1: "<<B<<" (es impar)"<<endl<<"Resultado: "<<B<<endl;
    (C/10)%2==0?cout<<"Grupo 2: "<<C<<" (es par)"<<endl<<"Resultado: "<<C+1<<endl:cout<<"Grupo 2: "<<C<<" (es impar)"<<endl<<"Resultado: "<<C<<endl;
    return 0;
}