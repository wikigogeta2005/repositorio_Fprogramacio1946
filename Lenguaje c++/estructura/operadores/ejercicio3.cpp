#include <iostream>
//operadores de incremento y decremento
using namespace std;
main()
{

    int n1=10, n2=20,resultado;
    n1++;//n1=n1+1
    ++n2;//n2= n2+1
    cout<<"n1="<<n1<<endl;
    cout<<"n2= "<<n2<<endl;
    //operaciones de preincremento
    resultado= ++n1;
    cout<<"resultado= "<<resultado<<endl;
    resultado= n2++; //posincremento despues hace el incremento
    cout<<" n2= "<<n2<<endl;
    cout<<"resultado ="<<resultado<<endl;





}