
#include <iostream>
using namespace std;
int main() {
    int A,B;
    cout<<"Ingresar 2 numeros : "<<endl;
    cin>>A>>B;
    if(A+B==5) {
        B=B+3;
        cout<<"Resultado: "<<2*A+B<<endl;
    }else {
        A=A-1;
        if((7*A+B)%2==0) {
            cout<<"Resultado: "<<A-B<<endl;
        }else {
            cout<<"Resultado: "<<A*B<<endl;
        }
    }
    return 0;
}
