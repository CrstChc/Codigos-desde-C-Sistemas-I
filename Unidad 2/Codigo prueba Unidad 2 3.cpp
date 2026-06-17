#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int n,m=1,k=1;
    cin >> n;
    int arr [n];
    for (int i = 1; i <= n; i++) {
        arr [i] = m;
        k++;
        if (k==m+1) {
            k=1,m++;
        }
    }
    for (int i = 1; i <= n; i++) {
            cout<< arr [i];
        }
}

// 1,22,333,4444,55555,6666666