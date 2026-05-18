// A=Valor a ingresar (abcd), B=Superior (ab), C=Inferior (cd)
#include <iostream>
using namespace std;
int main() {
    int  A,B,C;
    do{
        cin>>A;
    }while (A>=10000 || A<1000);
    B=A/100,C=A%100;
    (B/10)%2==0?cout<<"Resultado: "<<B+1<<endl:cout<<"Resultado: "<<B<<endl;
    (C/10)%2==0?cout<<"Resultado: "<<C+1<<endl:cout<<"Resultado: "<<C<<endl;
    return 0;
}