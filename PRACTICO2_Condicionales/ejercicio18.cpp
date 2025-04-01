#include<iostream>
#include<cmath>
using namespace std;

int main(){

    cout << "Vio usted mi gato?"<<endl;
    string transeunte;
    string vio_al_gato = "SI";
    if(transeunte=="SI" or transeunte == "Si" or transeunte == "si"){
        cout << "Color de la primera casa: " <<endl;
        string color_casa1;
        cin >> color_casa1;
        cout << "Numero de pisos de la primera casa" <<endl;
        string numero_pisos_casa1;
        cin >> numero_pisos_casa1;
        cout << "Color de la segunda casa: " <<endl;
        string color_casa2;
        cin >> color_casa2;
        cout << "Numero de pisos de la segunda casa" <<endl;
        string numero_pisos_casa2;
        cin >> numero_pisos_casa2;
        cout << "Color de la tercera casa: " <<endl;
        string color_casa3;
        cin >> color_casa3;
        cout << "Numero de pisos de la tercera casa" <<endl;
        string numero_pisos_casa3;
        cin >> numero_pisos_casa3;
    }
    else{
        cout << "El transeunte no vio nada" <<endl;
    }

    return 0;
}