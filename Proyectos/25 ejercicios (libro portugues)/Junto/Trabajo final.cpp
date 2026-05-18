#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    int opcion=0;
    while(opcion!=26)
    {
        cout<<"----------Menu de ejercicios----------"<<endl;
        cout<<"Escriba el numero de ejercicio (1-25)"<<endl;
        cout<<"Ejercicio: ";cin>>opcion;

        if (opcion==1)
        {
            cout<<"----------Resta de dos numeros----------"<<endl;
            float num1, num2, resta;
	        cout<<"ingrese dos 2 numeros separados por un espacio:"<<endl;
	        cin>>num1>> num2;
	        resta = num1 - num2;
	        cout<<"la resta es: "<< resta<<endl;
        }
        else if (opcion==2)
        {
            cout<<"----------Multiplicación de tres números----------"<<endl;
            float num1, num2, num3, multi;
	        cout<<"ingrese 3 numeros separados por un espacio:"<<endl;
	        cin>>num1>> num2 >>num3;
	        multi = num1*num2*num3;
	        cout<<"la multiplicacion es: "<< multi<<endl;
        }
        else if (opcion==3)
        {
            cout<<"----------División de dos números----------"<<endl;
            float num1, num2, div;
	        cout<<"ingrese dos 2 numeros separados por un espacio:"<<endl;
	        cin>>num1>> num2;
	        div = num1/num2;
	        cout<<"la division es: "<< div<<endl;
        }
        else if (opcion==4)
        {
            cout<<"----------Promedio ponderado de dos notas----------"<<endl;
            cout<<"peso 2 para la primera nota y peso 3 para la segunda nota"<<endl;
            float num1, num2, pp;
	        cout<<"ingrese las dos 2 notas separadas por un espacio:"<<endl;
	        cin>>num1>> num2;
	        pp = ((num1*2)+(num2*3))/5;
	        cout<<"el promedio ponderado es: "<< pp<<endl;
        }
        else if (opcion==5)
        {
            cout<<"----------Descuento del 10 porciento a un producto----------"<<endl;
            float precio, final;
	        cout<<"ingrese el precio:"<<endl;
	        cin>>precio;
	        final= precio-(precio/10);
	        cout<<"el precio final es: "<< final<<endl;
        }
        else if (opcion==6)
        {
            float sf,vv,cm,SF;
            cout<<"----------Hallar Salario Final y Comision----------"<<endl;
            cout<<"Salario Fijo: ";cin>>sf;
            cout<<"Valor de Ventas: ";cin>>vv;
            cm= vv*0.04;
            cout<<"Valor de comision: "<<cm<<endl;
            SF=cm+sf;
            cout<<"Salario Final: "<<SF<<endl;
        }
        else if (opcion==7)
        {
            float ps,p1,p2;
            cout<<"----------Aumento y disminucion de peso----------"<<endl;
            cout<<"Ingresar peso (Kg): ";cin>>ps;
            p1=ps*0.15;
            p2=ps*0.2;
            cout<<"Peso + 15%: "<<p1+ps<<endl;
            cout<<"Peso -20%: "<<ps-p2<<endl;
        }
        else if (opcion==8)
        {
            float pk,pg;
            cout<<"----------Convertir Kg a g----------"<<endl;
            cout<<"Ingrese peso (Kg): ";cin>>pk;
            pg=pk*1000;
            cout<<"Peso en Gramos: "<<pg<<endl;
        }
        else if (opcion==9)
        {
            float A,B,b,h;
            cout<<"----------Area de un Trapecio----------"<<endl;
            cout<<"Ingrese Base Mayor: ";cin>>B;
            cout<<"Ingrese Base Menor: ";cin>>b;
            cout<<"Ingrese Base Altura: ";cin>>h;
            A=((B+b)*h)/2;
            cout<<"Area de Trapecio: "<<A<<endl;
        }
        else if (opcion==10)
        {
            float l,A;
            cout<<"----------Area de un Cuadrado----------"<<endl;
            cout<<"Ingrese lado: ";cin>>l;
            A=pow(l,2);
            cout<<"El Area es: "<<A<<endl;
        }
        else if (opcion==11)
        {
            float D, d, A;
            cout<<"----------Area de un Rombo----------"<<endl;
            cout << "Ingrese la diagonal mayor: ";cin >> D;
            cout << "Ingrese la diagonal menor: ";cin >> d;
            A = (D * d) / 2;
            cout << "El area del rombo es: " << A<<endl;
        }
        else if (opcion==12)
        {
            float salarioMinimo, salarioFuncionario, cantidad;
            cout<<"----------Cantidad de salarios mínimos----------"<<endl;
            cout << "Ingrese el salario minimo: ";cin >> salarioMinimo;
            cout << "Ingrese el salario del funcionario: ";cin >> salarioFuncionario;
            cantidad = salarioFuncionario / salarioMinimo;
            cout << "La cantidad de salarios minimos que gana es: " << cantidad<<endl;
        }
        else if (opcion==13)
        {
            cout<<"----------Tabla de multiplicar sin usar for ni while----------"<<endl;
            int num;
            cout << "Ingrese un numero: ";cin >> num;
            cout << num << " x 1 = " << num * 1<<"  "<<endl;
            cout << num << " x 2 = " << num * 2<<"  "<<endl;
            cout << num << " x 3 = " << num * 3<<"  "<<endl;
            cout << num << " x 4 = " << num * 4<<"  "<<endl;
            cout << num << " x 5 = " << num * 5<<"  "<<endl;
            cout << num << " x 6 = " << num * 6<<"  "<<endl;
            cout << num << " x 7 = " << num * 7<<"  "<<endl;
            cout << num << " x 8 = " << num * 8<<"  "<<endl;
            cout << num << " x 9 = " << num * 9<<"  "<<endl;
            cout << num << " x 10 = " << num * 10<<"  "<<endl;
            cout << num << " x 11 = " << num * 11<<"  "<<endl;
            cout << num << " x 12 = " << num * 12<<"  "<<endl;
        }
        else if (opcion==14)
        {
            cout<<"----------Edad en años, meses, días y semanas----------"<<endl;
            int nacimiento, actual;
            int anios, meses, dias, semanas;

            cout << "Ingrese el año de nacimiento: ";
            cin >> nacimiento;
            cout << "Ingrese el año actual: ";
            cin >> actual;
            anios = actual - nacimiento;
            meses = anios * 12;
            dias = anios * 365;
            semanas = dias / 7;
            cout << "Edad en años: " << anios<<"   "<<endl;
            cout << "Edad en meses: " << meses<<"   "<<endl;
            cout << "Edad en dias: " << dias<<"   "<<endl;
            cout << "Edad en semanas: " << semanas<<"   "<<endl;
        }
        else if (opcion==15)
        {
            cout<<"----------Salario restante de Joao----------"<<endl;
            float salario, cuenta1, cuenta2;
            float multa1, multa2, restante;
            cout << "Ingrese el salario: ";
            cin >> salario;
            cout << "Ingrese el valor de la primera cuenta: ";
            cin >> cuenta1;
            cout << "Ingrese el valor de la segunda cuenta: ";
            cin >> cuenta2;
            multa1 = cuenta1 * 0.02;
            multa2 = cuenta2 * 0.02;
            restante = salario - (cuenta1 + multa1 + cuenta2 + multa2);
            cout << "El salario restante es: " << restante<<endl;
        }
        else if (opcion==16)
        {
            cout<<"----------Hallar la Hipotenusa----------"<<endl;
            float ca,co,H;
            cout<<"ca = :";cin>>ca;
            cout<<"co = :";cin>>co;
            H=sqrt( pow(ca,2) + pow(co,2));
            cout<<"respuesta :"<<H<<endl;
        }
        else if (opcion==17)
        {
            cout<<"----------Propiedades de la esfera (longitud, área y volumen)----------"<<endl;
            float R, L, A, V; //R:radio l: Longitud A:area V:Volumen
            const double PI = 3.1416;
            cout << "Ingrese el radio de la esfera: ";cin >> R;
            L= 2 * PI * R;
            A = PI * pow(R, 2);
            V= (3.0/4.0)* PI * pow(R, 3);
            cout << "Longitud: " << L << endl;
            cout << "Area: " << A<< endl;
            cout << "Volumen: " << V<< endl;
        }
        else if (opcion==18)
        {
            cout<<"----------Conversión de Celsius a Fahrenheit----------"<<endl;
            double C,F;
            cout<<"ingrese celcius :";cin>>C;
            F = (C * 9.0 / 5.0) + 32;
            cout<<"la temperatura en Fahrenheit es :"<<F<<endl;
        }
        else if (opcion==19)
        {
            cout<<"----------Área y potencia de iluminación de un cuarto----------"<<endl;
            int a,b,A,P;
            cout<<"ingrese a:";cin>>a;
            cout<<"ingrese b:";cin>>b;
            A = a * b;
            P = A * 18;
            cout<<"Area:"<<A<<"m²";
            cout<<"potencia necesaria :"<<P<<"W"<<endl;
        }
        else if (opcion==20)
        {
            cout<<"----------Hallar la medida de la escalera----------"<<endl;
            double AG, D, AR, ME;
            const double PI = 3.14159265;
            cout << "Ingrese el angulo formado por la escalera (grados): ";cin >> AG;
            cout << "Ingrese la distancia de la escalera a la pared: ";cin >> D;
            AR = AG * (PI / 180.0);
            ME = D / cos(AR);
            cout << "La medida de la escalera es: " << ME <<endl;
        }
        else if (opcion==21)
        {
            cout<<"----------Calcular el salario con horas extras----------"<<endl;
            int HT,HE,Sm,Sb,Se,S,GT,GE;
            do {
                cout<<"Ingrese las horas trabajadas y las horas extra trabajadas:"<<endl;
                cin>>HT>>HE;
                cout<<"Ingrese el salario mínimo"<<endl;
                cin>>Sm;
                if (HT<1 || HE<1) {
                    cout<<"Error, Hora ingresada no válida"<<endl;
                } else if (Sm<1) {
                    cout<<"Error, salario mínimo no válido"<<endl;
                }
            }while (HT<1 || HE<1 || Sm<1);
            GT=Sm/8,GE=Sm/4,Sb=HT*GT;
            Se=HE*GE;
            S=Sb+Se;
            cout<<"Recibe un salario total de: "<<S<<" dolares"<<endl;
        }
        else if (opcion==22)
        {
            cout<<"----------Número de diagonales de un polígono----------"<<endl;
            int Nlad,Ndia;
            do {
                cout<<"Ingrese el número de lados del polígono: "<<endl;
                cin>>Nlad;

                if (Nlad < 3) {
                    cout << "Error: El polígono no existe" << endl;
                }
            } while (Nlad < 3);
            Ndia=Nlad*(Nlad-3)/2;
            cout<<"El número total de diagonales del polígono es: "<<Ndia<<endl;
        }
        else if (opcion==23)
        {
            cout<<"----------Hallar el tercer ángulo de un triángulo----------"<<endl;
            int anguloA,anguloB,anguloC;
            do {
                cout<<"Ingrese dos angulos: "<<endl;
                cin>>anguloA>>anguloB;
                if (anguloA<1 || anguloB<1) {
                    cout<<"Error, los angulos deben ser mayores o iguales a 1"<<endl;
                } else if (anguloA+anguloB>179) {
                    cout<<"Error, la suma de ambos angulos no debe ser mayor a 180"<<endl;
                }
            } while (anguloA<1 || anguloB<1 || anguloA+anguloB>179);
            anguloC=180-anguloA-anguloB;
            cout<<"El angulo C tiene "<<anguloC<<" grados"<<endl;
        }
        else if (opcion==24)
        {
            cout<<"----------Conversión de moneda (Dólar, Marco, Libra)----------"<<endl;
            float R, D, M, L;
            do {
                cout<<"Ingrese los reales que tiene: "<<endl;
                cin>>R;
                if (R<0) {
                    cout<<"Error: los reales deben ser de valor positivo"<<endl;
                }
            }while (R<0);
            D=R/1.80, M=R/2, L=R/1.57;
            cout<<fixed<<setprecision(2);
            cout<<"Al convertir los reales en otras monedas: "<<endl;
            cout<<"A dolares serian: "<<D<<" dolares"<<endl;
            cout<<"A marcos alemanes serian: "<<M<<" marcos alemanes"<<endl;
            cout<<"A libras esterlinas serian: "<<L<<" libras esterlinas"<<endl;
        }
        else if (opcion==25)
        {
            cout<<"----------Conversión de tiempo a minutos y segundos----------"<<endl;
            int H,MinA,MinB,MinT,S;

            do {
                cout<<"Ingrese una cantidad de horas y minutos: "<<endl;

                cin>>H>>MinA;

                if (MinA > 59) {
                    cout << "Error: los minutos no deben ser mayores o iguales a 60" << endl;
                } else if (H < 0 || MinA < 0) {
                    cout << "Error: Valores no válidos, tienen que ser positivos"<<endl;
                }
            } while (MinA >59 || H<0 || MinA<0);
            MinB=H*60,MinT=MinA+MinB,S=MinT*60;
            cout<<"Las horas convertidas a minutos son: "<<MinB<<" minutos"<<endl;
            cout<<"Son "<<MinT<<" minutos en total"<<endl;
            cout<<"El total de minutos en segundos es: "<<S<<" segundos"<<endl;
        }
        else if (opcion==0) {
            cout<<"Hasta la proxima / See you later";
        return 1;
        }
    }
    return 0;
}