#include <iostream>

using namespace std;
int main () {
    int N, opcion;
    cout<<"Escoger opcion (1-12) y un valor (se recomienda impar)"<<endl;
    cin>>opcion>>N;
    switch (opcion) {
        // Numero 01
        case 1:
        for (int i=1; i<=N; i++) {
            cout<<endl;
            for (int j=1; j<=N; j++) {
                cout<<" X ";
            }
        }
            break;
        // Numero 02
            case 2:
        for (int i=1; i<=N; i++) {
            cout<<endl;
            for (int j=1; j<=i;j++) {
                cout<<" X ";
            }
        }
            break;
        // Numero 03
            case 3:
        for (int i=1; i<=N; i++) {
            cout<<endl;
            for (int j=N; j>=1; j--) {
                if (i==1 || i==N) {
                    cout<<" X ";
                }else if (2<=i<=N-1 && j==i) {
                    cout<<" X ";
                }else{
                    cout<<"   ";
                }
            }
        }
            break;
        // Numero 04
            case 4:
        for (int i=1; i<=N; i++) {
            cout<<endl;
            for (int j=i; j<=N;j++) {
                cout<<" X ";
            }
        }
            break;
        // Numero 05
        case 5:
        for (int i=1; i<=N; i++) {
            cout<<endl;
            for (int j=1; j<=N;j++) {
                if (j>=i) {
                    cout<<" X ";
                }else {
                    cout<<"   ";
                }
            }
        }
            break;
        // Numero 06
            case 6:
        for (int i=1; i<=N; i++) {
            cout<<endl;
            for (int j=1; j<=N; j++) {
                if (i==1 || i==N) {
                    cout<<" X ";
                }else if (j==i) {
                    cout<<" X ";
                }else{
                    cout<<"   ";
                }
            }
        }
            break;
        // Numero 07
            case 7:
        for (int i=1; i<=N; i++) {
            cout<<endl;
            for (int j=1; j<=N; j++) {
                if (i==1 || i==N) {
                    cout<<" X ";
                }else if (j==1 || j==N) {
                    cout<<" X ";
                }else{
                    cout<<"   ";
                }
            }
        }
            break;
        // Numero 08
        case 8:
        for (int i=1; i<=N; i++) {
            cout<<endl;
            for (int j=1; j<=N;j++) {
                if (N-j>=i) {
                    cout<<"   ";
                }else {
                    cout<<" X ";
                }
            }
        }
            break;
        // Numero 09
        case 9:
        for (int i=1; i<=N; i++) {
            cout<<endl;
            for (int j=1; j<=N;j++) {
                if (j==N || i==N || j+i==N+1) {
                    cout<<" X ";
                }else {
                    cout<<"   ";
                }
            }
        }
            break;
        // Numero 10 i+j>=N+1 || i+j>=i+i
        case 10:
            for (int i=1; i<=N; i++) {
            cout<<endl;
            for (int j=1; j<=N;j++) {
                if (i==1 || i==N) {
                    cout<<" X ";
                }else if ((j>=i && j<=N-i+1) || (j<=i && j>=N-i+1)) {
                    cout<<" X ";
                }else{
                    cout<<"   ";
                }
            }
        }
            break;
        // Numero 11
            case 11:
        for (int i=1; i<=N; i++) {
            cout<<endl;
            for (int j=1; j<=N;j++) {if (j==1 || j==N) {
                    cout<<" X ";
                }else if ((i>=j && i<=N-j+1) || (i<=j && i>=N-j+1)) {
                    cout<<" X ";
                }else{
                    cout<<"   ";
                }
            }
        }
            break;
        // Numero 12

        // Numero 13

        // Numero 14

        // Numero 15
            case 12:
        for (int i=1; i<=N; i++) {
            cout<<endl;
            for (int j=1; j<=N;j++) {
                if (i==j || i+j==N+1) {
                    cout<<" X ";
                }else{
                    cout<<"   ";
                }
            }
        }
            break;
        // Numero 16

        // Numero 17

        // Final
    }
    return 0;
}