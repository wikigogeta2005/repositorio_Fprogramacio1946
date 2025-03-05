#include <iostream>
using namespace std;

float suma(float a, float b)
{
    return a + b;
}

float resta(float a, float b)
{
    return a - b;
}

float multiplicacion(float a, float b)
{
    return a * b;
}


float division(float a, float b)
{
    return a / b;
}

int residuo(int a, int b)
{

    return a % b;
}

main()
{
    int a,b;
    cout<<"Ingrese el primer numero: ";
    cin >>a;
    cout<<"Ingrese el segundo numero: ";
    cin>>b;

    cout<<"La suma de a + b es"<<(a, b)<<endl;
    cout<<"La resta de a - b es"<<(a, b)<<endl;
    cout<<"La multiplicacion de a * b es"<<(a, b)<<endl;
    cout<<"La division  de a / b es"<<(a, b)<<endl;
    cout<<"El residuo de los valores de a y b son: "<<(a,b)<<endl;




}