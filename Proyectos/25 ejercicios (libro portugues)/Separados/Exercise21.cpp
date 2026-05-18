//Programa que reciba el número de horas trabajadas, el salario mínimo y el número de horas extras trabajadas.
//Calcule y muestre su salario de acuerdo a lo siguiente:
//A) La hora de trabajo vale 1/8 al salario mínimo;
//B) La hora extra vale 4 veces el salario mínimo;
//C) El salario bruto es igual al número de horas trabajadas multiplicado por el valor de la hora trabajada;
//D) El cantidad a cobrar por las horas extraordinarias es igual al número de horas extras trabajadas  por el valor de las horas extras
//E) El salario a cobrar es igual al salario bruto más la cantidad a cobrar por las horas Extras.
//Horas trabajadas=HT, Horas extras=HE, Salario Mínimo=Sm, Salario Bruto=Sb,Salario Extra=SE, Sueldo=S, GananciaporHora=GT, GananciaExtra=GE
#include<iostream>
using namespace std;
int main() {
    int HT,HE,Sm,Sb,Se,S,GT,GE;
    do {
        cout<<"Ingrese las horas trabajadas y las horas extra trabajadas:"<<endl;
        cin>>HT>>HE;
        cout<<"Ingrese el salario mínimo"<<endl;
        cin>>Sm;
        if (HT<1 || HE<1) {
            cout<<"Error, Hora ingresada no válida"<<endl;
        } else if (Sm<1) {
            cout<<"Error, salario mínimo no válido"<<endl;
        }
    }while (HT<1 || HE<1 || Sm<1);
    GT=Sm/8,GE=Sm/4,Sb=HT*GT;
    Se=HE*GE;
    S=Sb+Se;
    cout<<"Recibe un salario total de: "<<S<<" dolares"<<endl;
    return 0;
}
// Created by Cristkito on 16/04/2026.
//
