#include <iostream>

using namespace std;
int main () {
    int N;
    cin>>N;
    for (int i=1; i<=N; i++) {
        cout<<endl;
        for (int j=1; j<=N; j++) {
            if (i==1 || i==N) {
                cout<<"X";
            }else if (j==1 || j==N) {
                cout<<"X";
            }else{
                cout<<" ";
            }
        }
    }
    return 0;
}