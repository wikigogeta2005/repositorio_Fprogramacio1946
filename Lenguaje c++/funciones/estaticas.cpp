#include <iostream>
using namespace std;

float promedio(float n)
{
    float suma=0;
    suma = suma+n;

    return suma;
}
main()
{
    int i,n;
    float resultado;
    cout<<"Cuantas veces quiere llamar a la funcion promedio: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        resultado= promedio(i);
    }
    cout<<"resultado: "<<resultado<<endl;

}