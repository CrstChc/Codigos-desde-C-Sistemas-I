#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n=0, formula;
    long double resultado=0, sumaA=0,sumaB=0,sumaAB=0,sumaA2=0,sumaB2=0;
    cout<<"Ingrese la cantidad de valores: ";
    cin>>n;
    int  A[n], B[n];
    for (int i=0; i<n;i++) {
        cout<<"Ingrese valor "<<i+1<<":  ";
        cin>>A[i];
    }
    cout<<"Ingrese formula a desarrollar: "<<endl;
    cin>>formula;
    switch (formula) {
        case 1: //Media aritmetica
            for (int i=0; i<n;i++) {
                resultado=resultado+A[i];
            }
            cout<<"Sumatoria: "<<resultado<<endl<<"Media aritmetica:"<<resultado/n<<endl;
            break;
        case 2: //Media armonica
            for (int i=0; i<n;i++) {
                resultado=resultado + 1.0/A[i];
            }
            cout<<"Media armonica: "<<n/resultado<<endl;
            break;
        case 3: //Media geometrica
            resultado=resultado+1;
            for (int i=0; i<n;i++) {
                resultado=resultado*A[i];
            }
            cout<<"Media geometrica: "<<pow(resultado,1.0/n)<<endl;
            break;
        case 4: //Desviacion media
            for (int i=0; i<n;i++) {
                sumaA=sumaA+A[i];
            }
            sumaA=sumaA/n;
            for (int i=0; i<n;i++) {
                resultado=resultado +abs(A[i]-sumaA);
            }
            cout<<"Desviacion media: "<<resultado/n<<endl;
            break;
        case 5: //Varianza y desviacion estandar
            for (int i=0; i<n;i++) {
                sumaA=sumaA+A[i];
            }
            sumaA=sumaA/n;
            for (int i=0; i<n;i++) {
                resultado=resultado +pow(A[i]-sumaA,2);
            }
            cout<<"Varianza estandar: "<<resultado/n<<endl;
            cout<<"Desviacion estandar: "<<sqrt(resultado/n)<<endl;
            break;
        case 6: //Coeficiente de correlacion
            double Pearson1, Pearson2;
            cout<<"Se usara otro vector para esta formula"<<endl;
            for (int i=0; i<n;i++) {
                cout<<"Ingrese valor "<<i+1<<" del segundo vector:  ";
                cin>>B[i];
            }
            for (int i=0; i<n;i++) {
                sumaA=sumaA + A[i];
                sumaB=sumaB + B[i];
                sumaAB=sumaAB+A[i]*B[i];
                sumaA2=sumaA2+ pow(A[i],2);
                sumaB2=sumaB2 + pow(B[i],2);
            }
            Pearson1= n*sumaAB-sumaA*sumaB;
            Pearson2= sqrt((n*sumaA2-pow(sumaA,2))*(n*sumaB2-pow(sumaB,2)));
            cout<<"Coeficiente de relacion de Pearson: "<<Pearson1/Pearson2;
            break;
        case 7: //Regresion lineal Segun el video
            double pendiente, intercepto, prediccion;
            cout<<"Se usara otro vector para esta formula"<<endl;
            for (int i=0; i<n;i++) {
                cout<<"Ingrese valor "<<i+1<<" del segundo vector:  ";
                cin>>B[i];
            }
            cout<<"Ingrese valor a predecir: ";
            cin>>prediccion;
            for (int i=0; i<n;i++) {
                sumaA=sumaA + A[i];
                sumaB=sumaB + B[i];
                sumaAB=sumaAB+A[i]*B[i];
                sumaA2=sumaA2+ pow(A[i],2);
            }
            pendiente = (sumaAB-sumaA*sumaB/n)/(sumaA2-pow(sumaA,2)/n);
            intercepto = sumaB/n-pendiente*(sumaA/n);
            cout<<"Regresion lineal: "<<intercepto+pendiente*prediccion;
            break;
        case 8: //Pronosticar mediante el metodo de minimos cuadrados
            double resa, resb, pronostico;
            cout<<"Se usara otro vector para esta formula"<<endl;
            for (int i=0; i<n;i++) {
                cout<<"Ingrese valor "<<i+1<<" del segundo vector:  ";
                cin>>B[i];
            }
            cout<<"Inserte valores a pronosticar: ";
            cin>>pronostico;
            for (int i=0; i<n;i++) {
                sumaA=sumaA + A[i];
                sumaB=sumaB + B[i];
                sumaAB=sumaAB+A[i]*B[i];
                sumaA2=sumaA2+ pow(A[i],2);
            }
            resa = (n*sumaAB-sumaA*sumaB)/(n*sumaA2-pow(sumaA,2));
            resb = (sumaB-resa*sumaA)/n;
            for (int i=0; i<pronostico;i++) {
                cout<<"Pronostico del valor "<<i+n+1<<" es: "<<resb+resa*(n+i+1)<<endl;
            }
            break;
        case 9: //Pronosticar mediante el metodo de tendencias
            long double TCP, primero, ultimo;
            primero =A[0], ultimo = A[n-1];
            TCP=pow(ultimo/primero,1.0/(n-1))-1;
            cout<<"La Tasa de Crecimiento Porcentual es: "<<TCP<<endl;
            cout<<"Se predice para el mes siguiente: "<<ultimo*(1+TCP);
            break;
        case 10: //Pronosticar mediante el metodo de incrementos porcentuales
            long double pronostico1, incremento, sumincr, promincr, ult1, prim1;
            sumincr = 0;
            for (int i=1; i<n;i++) {
                ult1=A[i],prim1= A[i-1];
                incremento = (ult1-prim1)/prim1;
                sumincr = sumincr + incremento;
                cout<<"El incremento de "<<i+1<<" es: "<<incremento<<endl;
            }
            promincr=sumincr/(n-1);
            pronostico1=A[n-1]*(1+promincr);
            cout<<"Se predice para el mes siguiente: "<<pronostico1<<endl;
            break;
        default:
            cout<<"Error, ingrese una opcion valida del 1 al 10"<<endl;
            break;
    }
    return 0;
}