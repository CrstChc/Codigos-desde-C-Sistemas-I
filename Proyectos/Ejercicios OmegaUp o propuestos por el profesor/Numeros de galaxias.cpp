#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cout<<"Ingresa 3 valores de galaxias: "<<endl;
    cin>>a>>b>>c;
        a<b?cout<<"True ":cout<<"False ";
        c>a?cout<<"True ":cout<<"False ";
        a==b?cout<<"True ":cout<<"False ";
        !a==c?cout<<"True ":cout<<"False ";
        c<=b?cout<<"True ":cout<<"False ";
    return 0;
}