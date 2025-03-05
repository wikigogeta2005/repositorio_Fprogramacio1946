#include <iostream>
using namespace std;

main()
{
    int n1,n2,n3,aux;

    cout<<"Ingrese un numero"<<endl;
    cin>>n1;
    cout<<"Ingrese un numero"<<endl;
    cin>>n2;
    cout<<"Ingrese un numero"<<endl;
    cin>>n3;
    aux=n1;
    n1=n2;
    n2=n3;
    n3=aux;

    cout<<" El intercambio de n1 es"<<n1<<endl;
    cout<<" El intercambio de n2 es"<<n2<<endl;
    cout<<" El intercambio de n3 es"<<n3<<endl;
    



}