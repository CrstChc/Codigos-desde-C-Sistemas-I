// Hacer un programa que recibe el peso de una persona, calcular y mostrar:
//A) el nuevo peso si la persona gana un 15% del peso ingresado;
//B) el nuevo peso si la persona pierde el 20% del peso escrito.
#include <iostream>
using namespace std;
int main() {
    float P,PI,PE;
    cout<<"Ingrese su peso: "<<endl;
    cin>>P;
    PI=P+(P*15/100);
    PE=P-(P*20/100);
    cout<<"Si ganas 15% de tu peso, tu nuevo peso es: "<<PI<<endl;
    cout<<endl<<"Si pierdes un 20% de tu peso, tu nuevo peso es: "<<PE<<endl;
    return 0;
}