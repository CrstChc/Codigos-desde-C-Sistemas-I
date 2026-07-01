#include <iostream>
using namespace std;
int main() {
    int A [10] = {10,2,3,9,6,1,5,4,7,8}, temp1;
    for (int j=0;j<10;j++){
        for (int i=0;i<9;i++){
            if (A[i]>A[i+1]){
                temp1= A[i];
                A[i]=A[i+1];
                A[i+1]=temp1;
            }
        }
    }
    for (int i=0;i<10;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}