#include <iostream>
using namespace std;
int main() {
    int A[6] = {10,20,30,40,50,60}, Obj=30, Ind=-1;
    for (int i = 0; i < 6; i++) {
        if (A[i] == Obj) {
            Ind = i;
            break;
        }
    }
    if (Ind != -1) {
        cout <<Obj<<" se ubica en el vector: "<<Ind<<endl;
    } else {
        cout << "No se encontro" << endl;
    }
    return 0;
}

//Busqueda Lineal Completa