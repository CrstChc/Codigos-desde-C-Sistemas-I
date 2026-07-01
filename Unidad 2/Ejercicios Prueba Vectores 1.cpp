#include <iostream>
using namespace std;
int main() {
    int n;
    double aprobados=0, desaprobados=0, porcentaje,n1;
    cout << "Ingrese la cantidad de notas: ";
    cin >> n;
    n1=n;
    int notas[n];
    cout << "Ingrese las notas finales: ";
    for (int i = 0; i < n; i++) {
        cin >> notas[i];
        if (notas[i] > 10) {
            aprobados++;
        }else {
            desaprobados++;
        }
    }
    porcentaje= 100/n1;
    aprobados= aprobados*porcentaje;
    desaprobados= desaprobados*porcentaje;
    cout << "Los aprobados son: "<<aprobados<<" %"<<endl;
    cout << "Los desaprobados son: "<<desaprobados<<" %";
    return 0;
}