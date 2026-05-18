#include <iostream>

using namespace std;
int main () {
    int N,M;
    for (int i=1; i<=10; i++) {
        cout<<endl;
        for (int j=1; j<=10; j++) {
            N=i*j;
            cout<<" "<<N<<" ";
        }
    }
    for (int i=1; i<=10; i++) {
        cout<<endl;
        for (int j=1; j<=i; j++) {
            cout<<"X ";
        }
    }
cout<<endl;

    for (int i=1; i<=10; i++) {
        cout<<endl;
        for (int j=i; j<=10; j++) {
            cout<<"X ";
        }
    }
}