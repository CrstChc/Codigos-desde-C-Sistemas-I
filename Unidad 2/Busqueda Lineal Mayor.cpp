#include <iostream>
using namespace std;
int main() {
    int A[5] = {10,20,50,40,30}, Obj=0, Ind;
    for (int i = 0; i < 5; i++) {
        if (A[i]>Obj) {
            Obj = A[i], Ind = i;
        }
    }
    cout <<"El mayor valor es "<<Obj<<", se ubica en el vector "<<Ind<<endl;
    return 0;
}

//Busqueda Lineal Mayor Valor