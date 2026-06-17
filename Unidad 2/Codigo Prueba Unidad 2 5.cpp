#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int A [5] = {10,20,30,40,50}, Suma=0;
    for (int i = 0; i < 5; i++) {
        Suma= Suma + A [i];
        //cout << A [i] << endl;
    }
    cout<< Suma/5;
    return 0;
}

// PROMEDIO