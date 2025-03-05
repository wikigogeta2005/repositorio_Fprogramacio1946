#include <iostream>
using namespace std;

float gravedad= 9.8;

void funcion1(int a)//receptar el valor del parametro actual 
{
    float gravedad=10.0;
    cout<<"gravedad en funcion 1: "<<gravedad<<endl;
    cout<<"Gravedad global: "<<::gravedad<<endl;
    cout<<"a: "<< a <<endl;


}

void funcion2(float b)
{
    float gravedad=10.0;
    cout<<"gravedad en funcion 2:  "<<gravedad<<endl;
    cout<<"Gravedad global: "<<::gravedad<<endl;//ambito
    cout<<"b" << b  <<endl;


}

main()
{
    int num1=10;
    float num2=20.5;
    {
        char letra= 'A';// ambito local al bloque definido por un control
        cout<<"letras "<<letra<<endl;
    }
    cout<<"gravedad en funcionb main:  "<<gravedad<<endl;
    funcion1(num1);
    funcion2(num2);
}