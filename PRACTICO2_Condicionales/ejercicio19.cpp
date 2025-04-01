#include<iostream>
#include<cmath>
using namespace std;

    int main(){

    cout<<"Ingrese la edad del candidato: "<<endl;
    int edad_candidato;
    cin>>edad_candidato;

    if(edad_candidato<18){
        cout <<"El candidato no puede tener menos de 18 años" <<endl;
    }
    else{
        cout <<"Ingrese los años de experienica del candidato: "<<endl;
        int años_experiencia;
        cin>>años_experiencia;
    if(años_experiencia >=0 or años_experiencia <=2){
        cout << "El puesto de trabajo que le corresponde es el de coordinador de proyecto"<<endl;
    }
    else if(años_experiencia >=3 or años_experiencia <5){
        cout << "El puesto de trabajo que le corresponde es el de director de proyecto"<<endl;
    }
    else if(años_experiencia > 4){
        cout <<"Puede tomar el puesto de director de proyectos o director senior de proyectos"<<endl;
    }
}
    return 0;
}