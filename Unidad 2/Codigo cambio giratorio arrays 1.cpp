#include <iostream>
using namespace std;
int main() {
    int A [9] = {1,2,3,4,5,6,7,8,9}, temp=A[0];
    for (int i=0;i<9;i++){
        A[i] = A[i+1];
    }
    for (int i=0;i<9;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}