#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int M,N,fact;
    double sum=0, i1=0, i2=0, sumi=0, sump=0,X,Y;
    bool primo;
    cout<<"Ingrese un ejercicio: "<<endl;
    cin>>M;
    switch (M) {
        case 1: //67. suma de impares
            cout<<"Ingrese un numero: "<<endl;
            cin>>N;
            for (int i=1;i<=N;i++) {
                i1=(i*2)-1;
                sum=sum+i1;
            }
            cout<<sum<<endl;
            break;
        case 2: //68.suma de pares
            cout<<"Ingrese un numero: "<<endl;
            cin>>N;
            for (int i=1;i<=N;i++) {
                i1=i*2;
                sum=sum+i1;
            }
            cout<<sum<<endl;
            break;
        case 3://69.suma de 20 a 100
            cout<<"N sera de 20 a 100"<<endl;
            N=100;
            for (int i=20;i<=N;i++) {
                if (i%2==0) {
                    sump=sump+i;
                }else {
                    sumi=sumi+i;
                }
            }
            cout<<"Suma de pares: "<<sump<<endl;
            cout<<"Suma de impares: "<<sumi<<endl;
            break;
        case 4://70. Sumatoria 1,2,4,7,...
            cout<<"Ingrese una cantidad de terminos: "<<endl;
            cin>>N;
            i2++;
            for (int i=1;i<=N;i++) {
                sum=sum+i2;
                i2=i2+i;
            }
            cout<<sum<<endl;
            break;
        case 5: //71.Sumatoria Fracciones
            cout<<"Ingrese un numero: "<<endl;
            cin>>N;
            for (int i=1;i<=N;i++) {
                i1=(double)i/(i+1);
                sum=sum+i1;
            }
            cout<<sum<<endl;
            break;
        case 6: //72. Sumatoria de factoriales pares
            cout<<"Ingrese un numero: "<<endl;
            cin>>N;
            for (int i=1;i<=N;i++) {
                fact=1;
                for (int j=1;j<=i*2;j++) {
                fact=fact*j;
                }
                sum=sum+fact;
            }
            cout<<sum<<endl;
            break;
        case 7: //73. Definir X sobre factorial
            cout<<"Ingrese una cantidad de terminos: "<<endl;
            cin>>N;
            cout<<"Define un valor para X: "<<endl;
            cin>>X;
            for (int i=1;i<=N;i++) {
                fact=1;
                for (int j=1;j<=2*i-1;j++) {
                    fact=fact*j;
                }
                sum=sum+pow(X,i)/fact;
            }
            cout<<sum<<endl;
            break;
        case 8: //74. Suma de primos, DIFICIL
            cout<<"Ingrese una cantidad de terminos: "<<endl;
            cin>>N;
            for (int num = 1; i1 < N; num++) {
                int divisores = 0;

                for (int j = 1; j <= num; j++) {
                    if (num % j == 0)
                        divisores++;
                }

                if (divisores == 2) {
                    i2 += num;
                    i1++;
                }
            }
            cout<<sum<<endl;
            break;
        case 9: //75. Suma y resta de fracciones
            cout<<"Ingrese una cantidad de terminos: "<<endl;
            cin>>N;
            for (int i=1;i<=N;i++) {
                i1=(double)(i+1)/(i+2);
                if (i%2==1) {
                    sum=sum+i1;
                }else {
                    sum=sum-i1;
                }
            }
            cout<<sum<<endl;
            break;
        case 10: //76. Suma y resta de fracciones (division y potencia)
            cout<<"Ingrese una cantidad de terminos: "<<endl;
            cin>>N;
            for (int i=1;i<=N;i++) {
                i1=(double)(i*2)/pow(i*2+1,3);
                if (i%2==1) {
                    sum=sum+i1;
                }else {
                    sum=sum-i1;
                }
            }
            cout<<sum<<endl;
            break;
        case 11: //77. Insertar X mas potencias DIFICIL
            cout<<"Ingrese una cantidad de terminos: "<<endl;
            cin>>N;
            cout<<"Define un valor para X: "<<endl;
            cin>>X;
            for (int i=1;i<=N;i++) {
                i1=(double)pow(X,i)/pow(i*2+1,3);
                if (i%2==1) {
                    sum=sum+i1;
                }else {
                    sum=sum-i1;
                }
            }
            cout<<sum<<endl;
            break;
        case 12: //78. Potencia y division
            cout<<"Ingrese una cantidad de terminos: "<<endl;
            cin>>N;
            for (int i=1;i<=N;i++) {
                i1=pow(2*i-1,2*i)/((2*i-1)+i/5.0);
                if (i%2==1){
                        sum=sum+i1;
                }else {
                    sum=sum-i1;
                }
            }
            cout<<sum<<endl;
            break;
        case 13: //79. Sumatoria y restas
            cout<<"Ingrese una cantidad de terminos: "<<endl;
            cin>>N;
            i2++;
            for (int i=1;i<=N;i++) {
                if ((i+2)%3==0) {
                    i1=7*((i+2)/3);
                    sum=sum+i1;
                }else if ((i+1)%3==0) {
                    i1=(i-2)/3*2+1;
                    sum=sum-i1;
                }else {
                    i1=i*2/3;
                    sum=sum-i1;
                }
            }
            cout<<sum<<endl;
            break;
        case 14:
            break;
        case 15:
            break;
        }
    return 0;
    }
