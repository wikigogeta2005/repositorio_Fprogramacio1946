#include <iostream>
using namespace std;

struct persona{
    int id;
    string nombre;
    int edad;
    bool casado=false;

};

void IngresarDatosRegistro(persona per[],int n){
    int i;
    char resp;
    for(i=0;i<n;i++){
        per[i].id=i+1;
        cout<<"Ingrese el nombre de la persona: ";
        getline(cin,per->nombre);
        cout<<"Ingrese la edad de la persona:";
        cin>>per->edad;
        cout<<"Es casado? <<S/N: ";
        cin.get(resp);
        cin.ignore();
        if(resp=='s' || resp=='S')
        per[i].casado=true;
    }

}

void MostrarDatosRegistro(persona per[],int n){
    int i;
    cout<<"ID\\Nombre\\EDAD\\Casado"<<endl;
    for(i=0;i<n;i++){
        cout<<"ID: "<<per[i].id<<endl;
        cout<<"Nombre: "<<per[i].nombre<<endl;
        cout<<"Edad: "<<per[i].edad<<endl;
        cout<<"Casado: "<<per[i].casado<<endl;

    }
}

persona Buscarpersona(persona per[],int n,int id){
    int i;
    persona encontrado;
    for(i=0;i<n;i++){
        if(per[i].id==id){
            encontrado=per[i];
            return encontrado;
        }
    }

    return encontrado;

}

main()
{
    int np,id;
    persona personas[np],encontrado;
    cout<<"Ingrese la cantidad de personas: ";
    cin>>np;
    IngresarDatosRegistro(personas,np);
    MostrarDatosRegistro(personas,np);
    cout<<"Ingrese el id de la persona a buscar: ";
    cin>>id;
    encontrado=Buscarpersona(personas,np,id);
    if(encontrado.id==0){
        
    }
    cout<<"ID\\Nombre\\EDAD\\Casado"<<endl;
        cout<<"ID: "<<encontrado.id<<endl;
        cout<<"Nombre: "<<encontrado.nombre<<endl;
        cout<<"Edad: "<<encontrado.edad<<endl;
        cout<<"Casado: "<<encontrado.casado<<endl;
}