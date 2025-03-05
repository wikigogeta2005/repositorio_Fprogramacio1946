#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void llenarvector(int v[], int n){
    srand(time(NULL));
    for(int i=0;i<n;i++){
        //v[i]=rand()%20+1;
        cin>>v[i];
    }
}

int ordenaburbuja(int v[], int n){
    
    int aux,cont=0;
    for(int i=0;i<n;i++){//NUMERO DE ELEMENTOS DE LAS PASADAS
        for(int j=0;j<n-1;j++){//Numero
            cont++;
            if(v[j]>v[j+1])
            {
                aux=v[j];
                v[j]=v[j+1];
                v[j+1]=aux;
            }
        }
    }
    return cont;
}

int ordenaburbujav2(int v[],int n){
    int mejora=1;
    int aux,cont=0;
    for(int i=0;i<n;i++){//NUMERO DE ELEMENTOS DE LAS PASADAS
        for(int j=0;j<n-mejora;j++){//Numero
            cont++;
            if(v[j]>v[j+1])
            {
                aux=v[j];
                v[j]=v[j+1];
                v[j+1]=aux;
            }
        }
        mejora++;
    }
    return cont;
}


int ordenaburbujav3(int v[],int n){
    int mejora=1;
    bool cambio=true;
    int aux,cont=0;
    for(int i=0;i<n && cambio;i++){//NUMERO DE ELEMENTOS DE LAS PASADAS
        cambio=false;
        for(int j=0;j<n-mejora;j++){//Numero
            cont++;
            if(v[j]>v[j+1])
            {
                aux=v[j];
                v[j]=v[j+1];
                v[j+1]=aux;
                cambio=true;
            }
        }
        mejora++;
    }
    return cont;
}

void muestravector(int v[],int n){
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout << endl;
}

void copiarvector(int original[], int guardar[], int n) {
    for (int i = 0; i < n; i++) {
        guardar[i] = original[i];
    }
}

void comparaciondeversiones(int vec[],int n){

    int vecV1[n], vecV2[n], vecV3[n];
    int comparaciondeV1, comparaciondeV2, comparaciondeV3;
    copiarvector(vec, vecV1, n);
    copiarvector(vec, vecV2, n);
    copiarvector(vec, vecV3, n);


    comparaciondeV1 = ordenaburbuja(vecV1, n);
    comparaciondeV2 = ordenaburbujav2(vecV2, n);
    comparaciondeV3 = ordenaburbujav3(vecV3, n);

    cout << "Comparaciones version 1: " << comparaciondeV1 << endl;
    cout << "Comparaciones version 2: " << comparaciondeV2 << endl;
    cout << "Comparaciones version 3: " << comparaciondeV3 << endl;

    if (comparaciondeV1 <= comparaciondeV2 && comparaciondeV1 <= comparaciondeV3) {
        cout << "La version original es la mas eficiente." << endl;
    }
    else if (comparaciondeV2 <= comparaciondeV1 && comparaciondeV2 <= comparaciondeV3) {
        cout << "La version 2  es la mas eficiente." << endl;
    }
    else {
        cout << "La version 3  es la mas eficiente." << endl;
    }
}


int main(){
    int ne;
    cout<<"Numeros de elementos: ";
    cin>>ne;
    int vec[ne];
    int vecoriginal[ne];

    llenarvector(vec,ne);
    copiarvector(vec, vecoriginal, ne);  

    cout<<"El vector original es: ";
    muestravector(vec, ne);
    int vecV1[ne];
    copiarvector(vecoriginal, vecV1, ne);  
    cout << "El numero de comparaciones burbujas v1 = " << ordenaburbuja(vecV1, ne) << endl;
    cout << "Vector ordenado (V1): ";
    muestravector(vecV1, ne);
    int vecV2[ne];
    copiarvector(vecoriginal, vecV2, ne);  
    cout << "El numero de comparaciones burbujas v2 = " << ordenaburbujav2(vecV2, ne) << endl;
    cout << "Vector ordenado (V2): ";
    muestravector(vecV2, ne);
    int vecV3[ne];
    copiarvector(vecoriginal, vecV3, ne);  
    cout << "El numero de comparaciones burbujas v3 = " << ordenaburbujav3(vecV3, ne) << endl;
    cout << "Vector ordenado (V3): ";
    muestravector(vecV3, ne);
    comparaciondeversiones(vec,ne);
}
