#include <iostream>
using namespace std;
int main() {
    int a1,a2,a3,a4,a5,a6,a7,a8,K;
    cout<<"Ingresa 8 valores de los estudiantes y seguido el nivel: "<<endl;
    cin>>a1>>a2>>a3>>a4>>a5>>a6>>a7>>a8>>K;
    if ((a1+a2+a3+a4+a5+a6+a7+a8)/8>=K) {
        cout<<"Lo lograran!"<<endl;
    }else {
        cout<<"Aun son muy malos!"<<endl;
    }
    return 0;
}