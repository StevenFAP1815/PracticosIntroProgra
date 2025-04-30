#include<iostream>
using namespace std;

//Prototipo de la funcion
int funcion1(float alto, float ancho);
int main(){
    
    cout << "Ingrese el alto"<<endl;
    float alto;
    cin >> alto;
    cout << "Ingrese el ancho"<<endl;
    float ancho;
    cin >>ancho;
    
    //llamada a la funcion
    float result = funcion1(alto,ancho);
    cout <<"El area del rectangulo es: "<< result <<endl;
    return 0;
}
//Cuerpo de la funcion
int funcion1(float alto, float ancho){
    float var;
    var = alto+ancho;
    return var;
}