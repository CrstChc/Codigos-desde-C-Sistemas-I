#include <iostream>
using namespace std;
int main() {
    int g1,g2,r,d1,d2;
    cout<<"Ingresa donde estan los 2 gatos y luego el raton: "<<endl;
    cin>>g1>>g2>>r;
    d1=abs(g1-r);
    d2=abs(g2-r);
    d1<d2?cout<<"gato 1 atrapa raton"<<endl:cout<<"gato 2 atrapa raton";
    return 0;
}