//acer un programa que calcula y muestra el área de un rombo.
//Se sabe que: a = (diagonal mayor * diagonal menor)/2
// Created by Cristkito on 16/04/2026.
#include <iostream>
#include<cmath>
using namespace std;
int main() {
    float D,d;
    cout<<"Introduce diagonal mayor y diagonal menor"<<endl;
    cin>>D>>d;
    float A=(D*d)/2;
    cout<<"Area del rombo es: "<<A<<endl;
    return 0;
}

//
