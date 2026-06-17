#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int n;
    cin >> n;
    int arr [n];
    for (int i = 0; i < n; i++) {
            if (i%2==1) {
                arr [i] = 1;
            }else {
                arr [i] = 0;
            }
    }
    for (int i = 0; i < n; i++) {
        cout << arr [i] << " ";
    }
    cout <<endl<< arr [n];
    return 0;
    }
