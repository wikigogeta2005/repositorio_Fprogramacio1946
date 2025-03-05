#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void llenarvector(int vector[], int n){
    srand(time(NULL));
    for(int i=0;i<n;i++){
        vector[i]=rand()%20+1;
       //cin>>vector[i];
    }
}

void muestravector(int vector[],int n){
    for(int i=0;i<n;i++){
        cout<<vector[i]<<" ";
    }
    cout << endl;
}

int ordenaseleccion(int vector[],int n){
    int contador=0,aux;
    bool cambios=true;
    for(int i=0;i<n-1&&cambios;i++){
        cambios=false;
        for(int j=i+1;j<n;j++){
            contador++;
            if(vector[i]>vector[j]){
                aux=vector[i];
                vector[i]=vector[j];
                vector[j]=aux;
                cambios = true;
            }
        }
    }
    return contador;

}

main(){
    int ne,comparaciones;
    cout<<"Ingresa el numero de elementos que deseas para tu vector: "<<endl;
    cin>>ne;
    int vector[ne];
    llenarvector(vector,ne);
    cout<<"vector original: \n";
    muestravector(vector,ne);
    ordenaseleccion(vector,ne);
    comparaciones= ordenaseleccion(vector,ne);
    cout<<"Vector ordenado :\n";
    muestravector(vector,ne);
    cout<<"\nEl numero de comparaciones es igual: "<<comparaciones;


}