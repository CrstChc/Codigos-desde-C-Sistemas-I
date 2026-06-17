#include <iostream>
using namespace std;
int main () {
    int A [5] = {10,20,30,40,50};
    for (int i = 4; i >= 0; i--) {
        cout << A[i] << endl;
    }
    return 0;
}

//SALIDA 10,20,30... a ...30,20,10