#include <iostream>
using namespace std;
int main() {
    int A[5] = {10,20,30,40,50}, B[5] = {15,25,35,45,55}, C [10];
    for (int i = 0; i < 10; i++) {
        if (i<=4) {
            C[i] = A[i];
        }else{
            C[i] = B[i-5];
        }
    }
    for (int i = 0; i < 10; i++) {
        cout << C[i] << " ";
    }
    return 0;
}

// C= {10,20,30,40,50,15,25,35,45,55}