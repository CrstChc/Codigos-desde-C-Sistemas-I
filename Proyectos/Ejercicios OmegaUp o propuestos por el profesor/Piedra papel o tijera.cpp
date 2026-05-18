#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {

    int a,b;
    b=1;
    do {
        cout<<"Papel (1), Piedra (2), Tijera (3)"<<endl;
        cin>>a;
        srand(time(0));
        int computadora;
        computadora = rand() % 3 + 1;

        cout << "La computadora eligió: "<<computadora<<endl;
        if (a==1 && computadora==2) {
            cout<<"Papel gana, gana computadora"<<endl;
        }
        else if (a==2 && computadora ==3) {
            cout<<"Piedra gana, gana computadora"<<endl;
        }
        else if (a==3 && computadora ==1) {
            cout<<"Tijera gana, gana computadora"<<endl;
        }
        else   if (a==2 && computadora==1) {
            cout<<"Papel gana, gana humano"<<endl;
        }
        else if (a==3 && computadora ==2) {
            cout<<"Piedra gana, gana humano"<<endl;
        }
        else if (a==1 && computadora ==3) {
            cout<<"Tijera gana, gana humano"<<endl;
        }
        else if (a==computadora) {
            cout<<"Empate"<<endl;
        }
    }while (b==1);

    return 0;
}