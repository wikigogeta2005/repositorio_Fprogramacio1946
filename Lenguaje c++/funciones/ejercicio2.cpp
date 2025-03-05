#include<iostream>
using namespace std;

int mayor(int a ,int b)
{
    if(a>b)
    return a;
    else
    return b;
}
float promedio(int n1, int n2)
{

    return( n1 + n2 )/2.0;

}
void saludo(int Hora)
{
    if(Hora<12)
    cout<<"Buenos dias"<<endl;
    else if(Hora<19)
    cout<<"Buenas tardes"<<endl;
    else
    cout<<"Buenas noches"<<endl;
}

main()
{

    int n1,n2,Hora;
    cout<<"Ingrese tres numeros por favor: ";
    cin>>n1>>n2>>Hora;
    cout<<"El mayor es: "<<mayor(n1,n2)<<endl;
    cout<<"El promedio es: "<<promedio(n1,n2)<<endl;
    saludo(Hora);

}