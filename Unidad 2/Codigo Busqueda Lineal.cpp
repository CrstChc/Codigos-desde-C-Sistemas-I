#include <iostream>
using namespace std;
int BusLin(int A[6],int Obj) {
    for (int i = 0; i < 6; i++) {
        if (A[i] == Obj) {
            return i;
        }
    }
    return 0;
}
int main() {
    int A[6] = {10,20,30,40,50,60}, Obj = 30;
    int Res = BusLin(A,Obj);
    if (Res != 0) {
        cout <<Obj<<" se ubica en el vector: "<<Res<<endl;
    } else {
        cout << "No se encontro" << endl;
    }
    return 0;
}

//BUSQUEDA LINEAL