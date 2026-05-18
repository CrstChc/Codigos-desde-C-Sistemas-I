#include <iostream>
using namespace std;
int main() {
  int N,X,Y;
  cin>>N;

  while(N>0||0<N) {
    cin>>X>>Y;

    if (X>0 && Y>0) {
      cout<<"I"<<endl;
    }
    else if (X<0 && Y<0) {
      cout<<"III"<<endl;
    }
    else if (X<0 && Y>0){
      cout<<"II"<<endl;
    }
    else if (X>0 && Y<0) {
      cout<<"IV"<<endl;
    }
    else if (X==0&&Y==0) {
      break;
    }
  }

    //-3,5 =II; 10,-5=IV
  return 0;

}
