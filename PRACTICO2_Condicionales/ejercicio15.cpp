#include<iostream>
#include<cmath>

using namespace std;

int main(){


    cout << "Introduzca la cantidad de segundos: " << endl;
    double segundos;
    cin >> segundos;

    if(segundos<0){
        cout << "Los segundos de entrada no pueden ser negativos"<<endl;
    }
    else{
        double horas = segundos/3600;
        double min = (segundos/3600)/60;
        double seg = segundos / 60;
        cout << horas << ":" <<min << endl;
    }
    return 0;
}