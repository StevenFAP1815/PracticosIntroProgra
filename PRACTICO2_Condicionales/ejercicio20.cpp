#include<iostream>
#include<cmath>
using namespace std;

int main(){

    cout <<"Ingrese el numero de documentos: "<<endl;
    int num_docs;
    cin>>num_docs;

    if(num_docs == 0){
        cout << "No se encontraron documentos"<<endl;
    }
    else if(num_docs >0 and num_docs <2){
        cout << "Se encontro un documento" <<endl;
    }
    else if(num_docs>=2){
        cout << "El numero de documentos encontrados es: " << num_docs <<endl;
    }
    return 0;
}