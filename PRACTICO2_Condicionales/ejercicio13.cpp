#include<iostream>
#include<cmath>

using namespace std;

int main(){

    cout<<"Ingrese un numero del 1 al 7"<<endl;
    int num_dia;
    cin >> num_dia;
    switch (num_dia){
    case 1:
        cout <<"Lunes"<<endl;
        break;
    case 2: 
        cout<<"Martes"<<endl;
        break;
    case 3:
        cout <<"miercoles"<<endl;
        break;
    case 4: 
        cout<<"Jueves"<<endl;
        break;
    case 5:
        cout <<"Viernes"<<endl;
        break;
    case 6: 
        cout<<"Sabado"<<endl;
        break;
    case 7:
        cout <<"Domingo"<<endl;
        break;
    default:
        cout << "Error"<<endl;
        break;
    }



    return 0;
}