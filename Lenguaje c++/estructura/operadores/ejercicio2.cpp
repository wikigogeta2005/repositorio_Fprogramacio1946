#include <iostream>
//uso de operadores ternarios

using namespace std;
main()
{

    int n1,n2,resultado;
    bool operacion;
    cout<<"Ingrese un numer: ";
    cin>>n1;
    cout<<"Ingrese un numero: ";
    cin>>n2;
    cout<<" 1era Forma: "<<endl;
    (n1>n2)?cout <<n1 <<" Es mayor que " <<n2:cout<<n2<< "es mayor que " <<n1;
    cout<<endl;
    cout<<"2da Forma"<<endl;
    resultado =(n1>n2)?n1/n2:n1%n2;
    cout<<"El resultado es "<<resultado<<endl;
    operacion= (n1>n2)?true:false;
    if(operacion)
    {
    cout<<" El resultado guarda la division de: "<<n1<< " entre "<<n2<<endl;
    }
    else
        cout<<"El resultado guarda el modulo de "<<n1<< " entre  "<<n2<<endl;


}