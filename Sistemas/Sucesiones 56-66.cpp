#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int M,N,a,b,c,k;
    cout<<"Ingrese un numero: "<<endl;
    cin>>M;
    switch (M) {
        case 1: //56
            cout<<"Ingrese un numero: "<<endl;
            cin>>N;k=1;
            a=1;
            for (int i=1;i<=N;i++) {
                cout<<"0, ";
                for (int j=1;j<=a;j++) {
                    cout<<k++<<", ";
                    i++;
                }
                a++;
            }
            break;
        case 2:  //57
            cout<<"Ingrese un numero: "<<endl;
            cin>>N;
            for (int i=1;i<=N;i++) {
                if ((i+3)%4==0) {
                    cout<<1+4*((i-1)/4)<<", ";
                }else if ((i+2)%4==0){
                    cout<<3+4*((i-1)/4)<<", ";
                }else if((i+1)%4==0){
                    cout<<5+4*((i-1)/4)<<", ";
                }else{
                    cout<<"0, ";
                }
            }
            break;
        case 3: //58
            cout<<"Ingrese un numero: "<<endl;
            cin>>N;
            for (int i=1;i<=N;i++) {
                if (i%2==1) {
                    cout<<1+3*((i-1)/2)<<", ";
                }else{
                    cout<<i*3/2-1<<", ";
                }
            }
            break;
        case 4: //59
            cout<<"Ingrese un numero: "<<endl;
            cin>>N;
            for (int i=1;i<=N;i++) {
                if ((i+3)%4==0) {
                    cout<<i<<", ";
                }else if ((i+2)%4==0){
                    cout<<i+1<<", ";
                }else if((i+1)%4==0){
                    cout<<i-1<<", ";
                }else{
                    cout<<i<<", ";
                }
            }
            break;
        case 5: //60
            cout<<"Ingrese un numero: "<<endl;
            cin>>N;
            for (int i=1;i<=N;i++) {
                if (i%2==1) {
                cout<<(i+1)/2<<", ";
                }else {
                cout<<i/2+2<<", ";
                }
            }
            break;
        case 6: //61 No logico, cambiar a Fibonacci
            cout<<"Ingrese un numero: "<<endl;
            cin>>N;a=1,b=1;
            for (int i=1;i<=N;i++) {
                    cout<<a<<", "<<endl;
                    c=a+b; a=b; b=c;
            }
            break;
        case 7: //62
            cout<<"Ingrese un numero: "<<endl;
            cin>>N;
            while (N%3!=0){
                cout<<"Ingrese un numero: "<<endl;
                cin>>N;
            }
            k=N/3;
            for (int i=1;i<=k;i++) {
                cout<<"2, ";
            }
            for (int i=1;i<=k;i++) {
                cout<<"4, ";
            }
            for (int i=1;i<=k;i++) {
                cout<<"6, ";
            }
            break;
        case 8: //63
            cout<<"Ingrese un numero: "<<endl;
            cin>>N;
            for (int i=1;i<=N;i++) {
                if ((i+2)%3==0) {
                    cout<<(-i-+1)/3<<", ";
                }else if ((i+1)%3==0) {
                    cout<<(i+1)*2/3<<", ";
                }else {
                    cout<<i<<", ";
                }
            }
            break;
        case 9: //64
            cout<<"Ingrese un numero: "<<endl;
            cin>>N;
            for (int i=1;i<=N;i++) {
                if ((i+2)%3==0) {
                    cout<<(-i-+1)/3<<", ";
                }else if ((i+1)%3==0) {
                    cout<<(i+1)*2/3<<", ";
                }else {
                    cout<<i<<", ";
                }
            }
            break;
        case 10: //65
            cout<<"Ingrese un numero: "<<endl;
            cin>>N;

            for (int i=1;i<=N;i++) {
                if ((i+2)%3==0) {
                    cout<<(-i-+1)/3<<", ";
                }else if ((i+1)%3==0) {
                    cout<<(i+1)*2/3<<", ";
                }else {
                    cout<<i<<", ";
                }
            }
            break;
        case 11: //66
            cout<<"Ingrese un numero: "<<endl;
            cin>>N;
            for (int i=1;i<=N;i++) {
                if ((i+2)%3==0) {
                    cout<<(i+3)/3*5<<", ";
                }else if ((i+1)%3==0) {
                    cout<<(i+3)/3*5-2<<", ";
                }else {
                    cout<<i/3*5-4<<", ";
                }
            }
            break;
            default:
            break;
    }
    return 0;
}