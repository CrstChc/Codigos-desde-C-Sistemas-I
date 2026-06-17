#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int n, k;
    cin >> n;
    int arr [n];
    for (int i = 0; i < n; i++) {
        arr [i] = ceil(i/3);
    }
    for (int i = 0; i < n; i++) {
        cout << arr [i] << " ";
    }
}

// Visualizar la siguiente secuencia
// 0 0 0 1 1 1 2 2 2 3 3 3 ...