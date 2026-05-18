#include <iostream>
using namespace std;
int main() {
    int X,Y,Z;
    cin>>X>>Y>>Z;
    if (X>0) {
        if (Y>0) {
            Z>0?cout<<"I":cout<<"V";
        } else if (Y<0) {
            Z>0?cout<<"II":cout<<"VI";
        }
    }else if (X<0) {
        if (Y>0) {
            Z>0?cout<<"III":cout<<"VII";
        } else if (Y<0) {
            Z>0?cout<<"IV":cout<<"VIII";
        }
    }
    return 0;
}