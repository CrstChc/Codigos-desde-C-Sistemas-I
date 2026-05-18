// Haz un programa que obtenga el peso de una persona en libras,
// calcula y muestra ese peso en gramos.
#include <iostream>
using namespace std;
int main() {
    float P,g;
    cout<<"Ingrese su peso en libras: "<<endl;
    cin>>P;
    g=P*453.592;
    int K=g/1000;
    cout<<"Pesas "<<g<<" gramos"<<endl;
    cout<<"Pesas "<<K<<" kilogramos"<<endl;
    return 0;
}
//
