// Al insertar Horas y minutos, deben salir:
// A) el tiempo escrito convertido en minutos;
// B) el total de minutos, osea los minutos convertidos y los minutos escritos:
// C) el total de minutos en segundos.
// Valores Hora=H, MinutosEscritos=MinA,MinutosConvertidos=MinB,TotaldeMinutos=MinT,Segundos=S
#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int H,MinA,MinB,MinT,S;

    do {
        cout<<"Ingrese una cantidad de horas y minutos: "<<endl;

        cin>>H>>MinA;

        if (MinA > 59) {
            cout << "Error: los minutos no deben ser mayores o iguales a 60" << endl;
        } else if (H < 0 || MinA < 0) {
            cout << "Error: Valores no válidos, tienen que ser positivos"<<endl;
        }
    } while (MinA >59 || H<0 || MinA<0);
    MinB=H*60,MinT=MinA+MinB,S=MinT*60;
    cout<<"Las horas convertidas a minutos son: "<<MinB<<" minutos"<<endl;
    cout<<"Son "<<MinT<<" minutos en total"<<endl;
    cout<<"El total de minutos en segundos es: "<<S<<" segundos"<<endl;
    return 0;
}

// Created by Cristkito on 16/04/2026.
//
