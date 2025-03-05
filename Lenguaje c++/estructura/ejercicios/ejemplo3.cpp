/*Escribe un programa que pida el limite inferior y superior de un intervalo, si el limitre inferior es mayor que el superior lo tiene que pedir.A continuacion se van introduciendo numeros 
*/

#include <iostream>
using namespace std;

main()
{

    int limiteinferior,limitesuperior,suma,numeros;
    cout<<"Ingrese un numero para el limite inferior: ";
    cin>>limiteinferior;
    cout<<"Ingrese un numero para el limite superior: ";
    cin>>limitesuperior;
    while(limiteinferior<limitesuperior)
    {
        cout<<"Error, Ingrese nuevamente los valores correspondientes: ";
        cout<<"Ingrese un numero para el limite inferior: ";
        cin>>limiteinferior;
        cout<<"Ingrese un numero para el limite superior: ";
        cin>>limitesuperior;

    }

    while(true)
    {
        cout<<"Ingresa cualquier numero: ";
        cin>>numeros;
         if(numeros==0)
         break;

         if(numeros<=limiteinferior && numeros>=limitesuperior)
         {
            suma=numeros+suma;
            cout<<"La suma es : "<<suma;

         }
         else 
         {
            cout<<"Los numeros no estan en los intervalos ";
         }
        
    }


}