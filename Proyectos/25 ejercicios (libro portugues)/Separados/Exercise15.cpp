//Joe ha recibido su salario y tiene que pagar dos cuentas atrasadas.
//Como sus cuentas están atrasadas, John tendrá que pagar
//una multa del 2% por cada cuenta. Haga un programa que
//calcule y muestre cuánto quedará del salario de John.
#include <iostream>
#include<cmath>
using namespace std;
int main() {
    float S,C1,C2,M1,M2,R;
    cout<<"Introduce tu salario"<<endl;
    cin>>S;
    cout<<"Introduce las multas"<<endl;
    cin>>C1>>C2;
    M1=C1/100*2,M2=C2/100*2, R=S-C1-C2-M1-M2;
    cout<<"Quedara "<<R<<" del salario tras pagar ambas cuentas"<<endl;
    return 0;
}
// Created by Cristkito on 16/04/2026.
//
