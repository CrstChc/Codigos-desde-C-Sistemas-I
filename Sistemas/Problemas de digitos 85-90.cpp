#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int M,N,X=0,Y=0,NumMayor,n=0,Pos;
    cout<<"Ingrese un ejercicio: "<<endl;
    cin>>M;
    switch (M) {
        case 1: //Determinar cantidad de digitos
            cout<<"Ingrese un numero: "<<endl;
            cin>>N;
            while (N !=0) {
               N=N/10;
                X++;
            }
            cout<<"Tiene "<<X<<"dígitos en total."<<endl;
            break;
        case 2: //Hallar la suma de sus digitos
            cout<<"Ingrese un numero: "<<endl;
            cin>>N;
            while (N !=0) {
                X=X+N%10;
                N=N/10;
            }
            cout<<"La suma de sus digitos es: "<<X;
            break;
        case 3: //Invertir digitos
            cout<<"Ingrese un numero: "<<endl;
            cin>>N;
            while (N !=0) {
                X=(X*10)+N%10;
                N=N/10;
            }
            cout<<"La inversión de números es: "<<X;
            break;
        case 4: //Excluir digitos pares
            cout<<"Ingrese un numero: "<<endl;
            cin>>N;
            Y++;
            while (N!=0) {
                n=N%10;
                if (n%2==1) {
                    X=X+n*Y;
                    Y=Y*10;
                }
                N=N/10;
            }
            cout<<"Al quitar digitos pares sale: "<<X;
            break;
        case 5: //Determinar si es capicua
            cout<<"Ingrese un numero: "<<endl;
            cin>>N;
            n=N;
            while (N!=0) {
                X=N%10;
                Y=Y*10+X;
                N=N/10;
            }
            if (n==Y) {
                cout<<"El numero ingresado es capicua";
            }else {
                cout<<"El numero ingresado no es capicua";
            }
            break;
        case 6: //Hallar mayor digito y su posicion en el lado derecho
            cout<<"Ingrese un numero: "<<endl;
            cin>>N;
            NumMayor=-1;
            while (N !=0) {
                X=N%10;
                n++;
                if (X>NumMayor) {
                    NumMayor=X;
                    Pos=n;
                }
                N=N/10;
            }
            cout<<"El digito de mayor valor es:"<<NumMayor<<endl;
            cout<<"A partir de la derecha esta ubicado en:"<<Pos<<endl;
            break;
    }
    return 0;
}
