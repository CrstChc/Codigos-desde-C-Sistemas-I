#include <iostream>
#include <cmath>
using namespace std;
int main () {

    float N;
    int n, m;
    int opcion=0;
    cout<<"Escoger ejercicio (1-7) y cantidad (se recomienda impar)"<<endl;
    cin>>opcion>>N;
    switch (opcion) {
        // Numero 11
        case 1:
            break;
        // Numero 11
        case 2:
            break;
        // Numero 12
        case 3:
        for (int i=1; i<=N; i++) {
            cout<<endl;
            for (int j=1; j<=N;j++) {
                n=ceil(N/2);
                if (i==n || j==n){
                    cout<<" X ";
                }else if (n>i) {
                    if ((i+j>=n+1 && j<n)||(j-i<=n-1 && j>n)) {
                        cout<<" X ";
                    }else {
                        cout<<"   ";
                    }
                }else{
                    if ((i-j<=n-1 && j<n)||(i+j<=n+N && j>n)) {
                        cout<<" X ";
                    }else {
                        cout<<"   ";
                    }
                }
            }
        }
            break;
        // Numero 13
        case 4:
            n=ceil(N/2),m=floor(N/3);
            for (int i=1; i<=n; i++) {
                cout<<endl;
                for (int j=1; j<=N;j++) {
                    if (j<=m){
                        if (i<m) {
                            if (i+j<=m) {
                                cout<<"   ";
                            }else{
                                cout<<" X ";
                            }
                        }else if (m==i) {
                            cout<<" X ";
                        }else if (m<i) {
                            if (i-j>=m) {
                                cout<<"   ";
                            }else{
                                cout<<" X ";
                            }
                        }
                    }else if (m<j && j<2*m+1) {
                        cout<<"   ";
                    }else {if (i<m) {
                            if (j-i<2*m+1) {
                                cout<<" X ";
                            }else{
                                cout<<"   ";
                            }
                        }else if (m==i) {
                            cout<<" X ";
                        }else if (m<i) {
                            if (i+j>4*m) {
                                cout<<"   ";
                            }else{
                                cout<<" X ";
                            }
                        }
                    }
                }
            }
            break;
        // Numero 14
        case 5:
            n=ceil(N/2);
        for (int i=1; i<=n; i++) {
            cout<<endl;
            for (int j=1; j<=N;j++) {
                if (i==n || i+j==n+1){
                    cout<<" X ";
                }else if (n>i) {
                    if ((i+j==n+1 && j<n)||(j-i==n-1 && j>n)) {
                        cout<<" X ";
                    }else {
                        cout<<"   ";
                    }

                }
            }
        }
            break;
        // Numero 16
        case 6:
            n=ceil(N/2);
            for (int i=1; i<=n; i++) {
                cout<<endl;
                for (int j=1; j<=N;j++) {
                    if (i==1){
                        cout<<" X ";
                    } else if (j==i || j==N-i+1) {
                            cout<<" X ";
                        }else{
                            cout<<"   ";
                        }
                    }
                }
            break;
        // Numero 17
        case 7:
            n=ceil(N/2);
            m=floor(N/3);
        for (int i=1; i<=N; i++) {
            cout<<endl;
            for (int j=1; j<=N;j++) {

                if (i<n) {
                    if (i+j<=n) {
                        cout<<"   ";
                    }else if (j>n) {
                        if (j-i<n) {
                            cout<<" X ";
                        }else {
                            cout<<"   ";
                        }
                    }else {
                        cout<<" X ";
                    }
                }else if (i==n){
                    cout<<" X ";
                }else {
                    if (i==N && (m<j && j<=2*m)) {
                        cout<<" X ";
                    }else if (j==n) {
                        cout<<" X ";
                    }else{
                        cout<<"   ";
                    }
                }
            }
        }
            break;
    }

    return 0;
}